#include<stdio.h>
#include<Windows.h>
//
//int main()
//{
//	struct A
//	{
//		int _a : 2;
//		int _b : 5;
//		int _c : 10;
//		int _d : 30;
//	};
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}
//int main()
//{
//

	//union Un1
	//{
	//	char c[5];
	//	int i;
	//};
	//union Un2
	//{
	//	short c[7];
	//	int i;
	//};
	////下面输出的结果是什么？
	//printf("%d\n", sizeof(union Un1));
	//printf("%d\n", sizeof(union Un2));
//
//	union Un
//	{
//		int i;
//		char c;
//	};
//	union Un un;
//	// 下面输出的结果是一样的吗？
//	printf("%d\n", sizeof(un));
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	//下面输出的结果是什么？
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}
//
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//		return 0;
//	int ret = 0;
//	while (*str)
//	{
//		ret = ret * 10 + *str - '0';
//		str++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char* p = "123";
//	int ret = my_atoi(p);
//	printf("%d ", ret);
//	return 0;
//}
//
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	while (1)
//	{
//		printf("呵呵");
//		Sleep(1000);
//	}
//	printf("%2d ", x);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = a;
	while (1)
	{

	}
	return 0;
}