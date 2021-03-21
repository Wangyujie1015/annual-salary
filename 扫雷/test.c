#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include"game.h"
//������
//test.c�ǲ���ģ�飬game.c��������ʵ�֣���game.h��������������ʵ����Ϸ�߼�
void game()
{
	char ret = 0;
	//��������� �к��е�������game. ����ͷ�ļ�
	char board[ROW][COL] = { 0 };//һ��ʼӦ��Ϊ�ո�
	InitBoard(board, ROW, COL);//��ʼ��Ϊ�ո�
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//1.���Ӯ(*)2.����Ӯ(#)3.ƽ��(Q)4.����(C)
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//�ж���Ӯ
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

	}
	//����,��������Ҳд��ѭ����,����ÿ�ζ����ӡ,��õȵ��������ѭ������,������Checkwin���淵�ص�ֵ�Ƕ��ٲ����ж�

		if (ret == '*')
		{
			printf("���Ӯ��\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else if (ret == 'C')
		{
			printf("ƽ��\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}
