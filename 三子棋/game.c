#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//void PrintfBorad(char board[3][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%c ", board[i][j] == 0 ? '@' : board[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int checkWin(char board[3][3], char player)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
//			return 1;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
//			return 1;
//	}
//
//	if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
//		return 1;
//	if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
//		return 1;
//
//	return 0;
//
//}
//
//bool IsBoardFull(char board[3][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (board[i][j] == 0)
//				return false;
//		}
//	}
//	return true;
//}
//
//
//
//void game(void)
//{
//	char board[ROW][COL] = { 0 };
//
//	int input_i, input_j = 0;
//	int random_i, random_j = 0;
//	
//	printf("现在开始进行三子棋游戏，请输入你要落子的位置(0-2范围)：\n");
//
//	PrintfBorad(board);
//	while (true )
//	{
//		printf("请输入你要落子的位置:\n");
//		while (scanf("%d%d", &input_i, &input_j) != 2 || input_i < 0 || input_j < 0 || input_i >2 || input_j >2 || board[input_i][input_j] != 0)
//		{
//			while (getchar() != '\n');
//			printf("输入位置无效或该位置已落子，请重新输入！\n");
//		}
//		printf("\n");
//		board[input_i][input_j] = '*';
//
//		if (checkWin(board, '*'))
//		{
//			PrintfBorad(board);
//			printf("你赢了\n");
//			return;
//		}
//		if (IsBoardFull(board))
//		{
//			printf("平局\n");
//			return;
//		}
//
//		if (!checkWin(board, '*') && !IsBoardFull(board))
//		{
//			bool placed = false;
//			while (!placed)
//			{
//				int random_numberi = rand() % 3;
//				int random_numberj = rand() % 3;
//
//				if (board[random_numberi][random_numberj] == 0)
//				{
//					board[random_numberi][random_numberj] = '#';
//					placed = 1;
//				}
//			}
//			PrintfBorad(board);
//			if (checkWin(board, '#'))
//			{
//				printf("电脑赢了\n");
//				return;
//			}
//			if (IsBoardFull(board))
//			{
//				printf("平局\n");
//				return;
//			}
//		}
//	}
//}


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col ;j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DispBoard(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("___");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}


//返回'*'用户获胜 返回'#'电脑获胜 
char CheckWin(char board[ROW][COL], char player)
{
	int i ,j= 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
			return player;
	}

	for (j = 0; j < ROW; j++)
	{
		if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
			return player;
	}

	if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
		return player;

	if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
		return player;

	return ' ';
}


int CheckFull(char board[ROW][COL],int row,int col)
{
	int i, j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]== ' ')
				return 0;
		}
	}
	return 1;
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("请输入要落子的坐标：\n");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("改坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}	
	}
}


void game(void)
{
	int input_i = 0;//玩家输入
	int input_j = 0;

	char ret = ' ';
	//定义数组
	char board[ROW][COL] = { 0 };

	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DispBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DispBoard(board, ROW, COL);
		ret = CheckWin(board, '*');
		if (ret == '*')
		{
			printf("玩家获胜！\n");
			return;
		}
		if (CheckFull(board, ROW, COL))
		{
			printf("平局！\n");
			return;
		}
		ComputerMove(board, ROW, COL);
		DispBoard(board, ROW, COL);

		ret = CheckWin(board, '#');
		if (ret == '#')
		{
			printf("电脑获胜！\n");
			return;
		}
		if (CheckFull(board, ROW, COL))
		{
			printf("平局！\n");
			return;
		}
	}
	
}



//void game(void)
//{
//	int input_i = 0;
//	int input_j = 0;
//	int ret = 0;
//	char temp[ROW][COL] = { 0 };
//
//	char board[ROW][COL] = { 0 };
//	char board2[ROW][COL] = { 0 };
//	InitBoard(board, ROW, COL);
//	CreaBoom(board, ROW, COL, BoomNum);
//	ShowNumber(board,board2, ROW, COL);
//	memcpy(temp, board2, sizeof(char) * TOTALITY);
//	DrawBoard(board2, ROW, COL);
//	while (1)
//	{
//		if (PlayerMove(board, board2,temp, ROW, COL))
//		{
//			break;
//		}
//		DrawBoard(board2, ROW, COL);
//		if (CheckWin(board, board2, ROW, COL))
//		{
//			printf("恭喜你，找出所有的非雷区！\n");
//			break;
//		}
//	}
//}