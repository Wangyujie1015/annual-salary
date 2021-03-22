#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <windows.h>
#include <string.h>

void print2(int(*arr)[5], int x, int y)
{
	printf("print2是\n");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", (*(arr + i))[j]);
		}
		printf("\n");
	}
}


void print1(int arr[3][5], int x, int y)
{
	printf("print1是\n");
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
//数组指针的使用常见于二维数组

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 },{3,4,5,6,7} };
	//写一个函数打印arr数组的内容
	print1(arr, 3, 5);
	print2(arr, 3, 5);

	return 0;
}



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5,6,7,8,9,10 };
//	//1
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	//2
//	//int(* p)[10] = &arr;//拿到的是数组的地址
//	//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//arr就是指针数组,里面存放的是三个int*类型的指针
//	int* arr[] = { &a, &b, &c };//int*
//
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//
//	int* arr4[] = { arr1, arr2, arr3 };
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//	return  0;
//}



//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	//这个写法不严谨
//	char* ps = "hello bit";//常量字符串
//	
//	//严谨的写法,本来就不能修改,加上const
//	const char* ps2 = "hello bit";
//
//
//	char arr[] = "hello bit";
//
//	return 0;
//
//
//
//
//}



//int main()
//{
//	int arr[] = {1,2,3,4,5,};
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i ;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//  //结果255;  strlen找'/0'的ASSII 码是0
//	return 0;
//}



//
//int main()
//{
//	unsigned int i;
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//休息500毫秒
//	}
//
//	return 0;
//
//}