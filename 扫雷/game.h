#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//声明函数
//初始化棋盘
void InintBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//检查输赢
char CheckWin(char board[ROW][COL], int row, int col);