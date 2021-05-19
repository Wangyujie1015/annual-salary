#include<stdio.h>

//
//struct SS
//{
//	char arr[1024];
//	int i;
//
//};
//
//void print1(struct SS ss)
//{
//	printf("%s %d\n", ss.arr, ss.i);
//}
//
//void print2(const struct SS* ps)//第二种更好
//{                         //结构体传参传地址
//	printf("%s %d\n", ps->arr, ps->i);
//}
//int main()
//{
//	struct SS s = {"hello bit",100};
//	print1(s);
//	print2(&s);
//	return 0;
//}
//
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30; 
//};
//
//enum day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fei,
//	Sat,
//	Sum,
//};
//
//enum Color
//{
//	RED=2,
//	GREEN=234,
//	BLUE=23
//};
//
//int main()
//{
//	enum Color c = RED;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

union Un
{
	char c[5];
	int i;
};

union U
{
	short i[7];
	int p;
};
int main()
{
	union Un u = { 0 };
	printf("%d\n", sizeof(u));
	return 0;
 }