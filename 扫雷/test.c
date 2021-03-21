#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include"game.h"
//三子棋
//test.c是测试模块，game.c（函数的实现）和game.h（函数声明）是实现游戏逻辑
void game()
{
	char ret = 0;
	//设计三子棋 行和列的数字用game. 引入头文件
	char board[ROW][COL] = { 0 };//一开始应该为空格
	InitBoard(board, ROW, COL);//初始化为空格
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//1.玩家赢(*)2.电脑赢(#)3.平局(Q)4.继续(C)
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//判断输赢
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

	}
	//看这,你把下面的也写进循环了,所以每次都会打印,你得等到上面这个循环结束,看最后从Checkwin里面返回的值是多少才能判断

		if (ret == '*')
		{
			printf("玩家赢了\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else if (ret == 'C')
		{
			printf("平局\n");
		}
		
		DisplayBoard(board, ROW, COL);
	}

void menu()
{
	printf("*********************************\n");
	printf("**********   1. play   **********\n");
	printf("**********   0. exit   **********\n");
	printf("*********************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}
