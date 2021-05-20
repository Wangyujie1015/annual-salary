#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "contact.h"
//
//union Un
//{
//	int i;
//	char c;
//};

//
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//
//int check_sys()
//{
//	union U
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	//共用一块空间
//	//返回0,大端,
//	//返回1,小端
//	return u.c;
//
//}
//
//int main()
//{
//	/*union Un u;
//	printf("%d\n", sizeof(u));*/
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
void menu()
{
	printf("**********************************\n");
	printf("*******1 add       2del      *****\n");
	printf("*******3 search    4 modify  *****\n");
	printf("*******5 sort      6 show    *****\n");
	printf("********** 0.exit         ********\n");
	printf("**********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW

};
void test()
{
	Contact con ;
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
		
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_contact(&con);
				break;
		case DEL:
			break; 
		case SEARCH:
				break;
		case MODIFY:
			break;
			
		case SORT:
			
			break;
		case SHOW:
			show_contact(&con);
			break;
		case EXIT:
			break;
		default:
			break;
		}
	} while(input);
}

int main()
{
	test();
	return 0;
}
