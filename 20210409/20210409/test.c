#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

void(*     signal(int, void(*)(int)  )  )(int);
//signal是一个函数声明
//signal第一个参数是int类型
//signal第二个参数是函数指针,该函数指针指向一个参数类型为int,返回类型为void的函数
//signal的返回类型也是函数指针,这个函数指针指向一个参数类型为int,返回类型为voidd
int main()
{
	 //函数声明,只要函数名,函数参数类型,函数返回类型

	return 0;
}