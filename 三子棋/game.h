#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



#define ROW          3
#define COL          3

//void game(void);

void InitBoard(char board[ROW][COL], int row, int col);
void DispBoard(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], char player);
int CheckFull(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col)


#endif  //__GAME_H__
