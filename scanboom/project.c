#define _CRT_SECURE_NO_WARNINGS
#include "project.h"

//void CreaBoom(char board[ROW][COL], int row, int col,int num)
//{
//	int random_i = 0;
//	int random_j = 0;
//
//	int count = 0;
//
//	while(count<num)
//	{
//		random_i = rand() % row ;
//		random_j = rand() % col ;
//
//		if (board[random_i][random_j] == ' ')
//		{
//			board[random_i][random_j] = '*';
//			count++;
//		}
//	}
//}
//
//
////��Ļ����ʾ��Χ�ж��ٸ���
//void ShowNumber(char board[ROW][COL], char board2[ROW][COL], int row, int col)
//{
//	int i, j, k, l, count;
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			count = 0;
//
//			for (k = i - 1; k <= i + 1; k++)
//			{
//				for (l = j - 1; l <= j + 1; l++)
//				{
//					if (k >= 0 && k < row && l >= 0 && l < col)
//					{
//						if (board[k][l] == '*')
//							count++;
//					}
//				}
//			}
//			board2[i][j] = count + '0';
//		}
//	}
//}
//
////��ʼ����Ļ
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//
////������Ļ
//void DrawBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//		
//	}
//}
//
//
//int PlayerMove(char board[ROW][COL], char board2[ROW][COL], char temp[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int class = 0;
//
//	printf("������Ҫɨ���λ�úͲ���(1��ʾ��¶��2��ʾ���)��\n");
//	scanf("%d %d %d", &x, &y, &class);
//	x -= 1;
//	y -= 1;
//
//	if (x >= 0 && x < row && y >= 0 && y < col) 
//	{
//		if (class == 1) 
//		{
//			if (board[x][y] == '*') 
//			{
//				printf("�ȵ����ˣ���Ϸ������\n");
//				return 1; // ��Ҵ��ף���Ϸ����
//			}
//			else 
//			{
//				board2[x][y] = board[x][y]; // ��¶��λ�ã���Ϊ board ֻ�� '*' �� ' '������ board2 ����ʾ ' '
//			}
//		}
//		else if (class == 2) 
//		{
//			if (board2[x][y] != ' ' && board2[x][y] != '!')
//			{
//				temp[x][y] = board2[x][y]; // ���浱ǰ״̬
//				board2[x][y] = '!'; // ��ұ����
//			}
//			else if (board2[x][y] == '!')
//			{
//				board2[x][y] = temp[x][y]; // ���ȡ����ǣ��ָ�֮ǰ������
//			}
//		}
//	}
//	else 
//	{
//		printf("����Ƿ����������������ꡣ\n");
//	}
//	return 0; // ������Ϸ
//}
//
//
//int CheckWin(char board[ROW][COL], char board2[ROW][COL],int row,int col)
//{
//	int x = 0;
//	int y = 0;
//	int coveredCells = 0;
//	int ret = 0;
//
//	for (x = 0; x < row; x++)
//	{
//		for (y = 0; y < col; y++)
//		{
//			
//			if (board2[x][y] == '!' && board[x][y] == '*')
//			{
//				coveredCells += 1;
//			}
//
//			if (coveredCells == 20)
//			{
//				ret = 1;
//			}
//		}
//	}
//	return ret;
//}
//
//
//
//
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
//			printf("��ϲ�㣬�ҳ����еķ�������\n");
//			break;
//		}
//	}
//}

void InitArr(char arr[ROW][COL], int row, int col,char emo)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = emo;
		}
	}
}

void CreaBoom(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (count < BoomNum)
	{
		i = rand() % row;
		j = rand() % col;

		if (arr[i][j] != '*')
		{
			arr[i][j] = '*';
			count++;
		}
	}

}


void DrawLine(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1 )
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}


void ShowNum(char arr[ROW][COL], int row, int col)
{
	int i, j, k, l, count;

	char tempboard[ROW][COL];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			tempboard[i][j] = arr[i][j];
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] != '*')
			{
				count = 0;
				for (k = i - 1; k <= i + 1; k++)
				{
					for (l = j - 1; l <= j + 1; l++)
					{
						if (k >= 0 && k < row && l >= 0 &&l < col && arr[k][l] == '*')
						{
							count++;
						}
					}
				}
				tempboard[i][j] = count + '0';
			}
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = tempboard[i][j];
		}
	}
}

void AccShow(char arr[ROW][COL], char arr2[ROW][COL], int x, int y)
{
	int i, j;
	if (arr2[x][y] == '0')
	{
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (i >= 0 && i < ROW && j >= 0 && j < COL&&arr2[i][j] == ' ')
				{
					arr2[i][j] = arr[i][j];
					if (arr[i][j] == '0')
					{
						AccShow(arr, arr2, i, j);
					}
					
				}
			}
		}
	}
}



int CheckWin(char arr[ROW][COL], char arr2[ROW][COL], int row, int col, int num)
{
	int i = 0;
	int j = 0;
	int CountBoom = 0;
	int ret = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == '*' && arr2[i][j] == '!')
			{
				CountBoom += 1;
			}
			if (CountBoom == num)
			{
				ret = 1;
			}
		}
	}
	return ret;
}

int PlayerMove(char arr[ROW][COL], char arr2[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int class = 0;

	printf("��������Ҫɨ������꣨1Ϊ�򿪣�2Ϊ��ǣ�:\n");
	scanf("%d%d%d", &i, &j, &class);

	i -= 1;
	j -= 1;

	if (i >= 0 && i < row && j >= 0 && j < col)
	{
		if (class == 1)
		{
			if (arr[i][j] == '*')
			{
				arr2[i][j] = arr[i][j];
				printf("�ȵ������ˣ������ˣ�\n");
				return 1;
			}
			else if (arr2[i][j] != '!' && arr2[i][j] != ' ')
			{
				printf("�����ظ����������Ѿ���ʾ����\n");
			}
			else
			{
				arr2[i][j] = arr[i][j];
				AccShow(arr, arr2, i, j);
			}
		}
		else if (class == 2)
		{
			if (arr2[i][j] == ' ')
			{
				arr2[i][j] = '!';
			}
			else if (arr2[i][j] == '!')
			{
				arr2[i][j] = ' ';
			}
			else
			{
				printf("������������������룡\n");
			}
		}

	}
	else
	{
		printf("������������������������룡\n");
	}
	return 0;
}






void game(void)
{
	int input_i = 0;
	int input_j = 0;
	char board[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };

	//��ʼ������
	InitArr(board, ROW, COL,'0');
	InitArr(show, ROW, COL, ' ');

	//����ը��
	CreaBoom(board, ROW, COL);
	ShowNum(board, ROW, COL);
	//��ӡɨ�׸�
	DrawLine(show, ROW, COL);

	while (1)
	{
		if (PlayerMove(board, show, ROW, COL))
		{
			break;
		}
		DrawLine(show, ROW, COL);
		if (CheckWin(board, show, ROW, COL,BoomNum))
		{
			printf("��ϲ�㣬�ҳ�������������\n");
			break;
		}
	}
}