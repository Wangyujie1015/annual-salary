#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t);

//typedef int* pi_t;
//#define PINT_T int*
//#define MAX 1000
//
//int main()
//{
//	int* p1, p2;
//	pi_t p3, p4;
//	PINT_T p5, p6;
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
// }
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int* arr[4];//整型指针数组
//	//函数指针数组
//	//存放函数指针
//	//int (*pf1)(int, int) = Add;
//	//int (*pf2)(int, int) = Sub;
//	int (*pf[4])(int, int) = {Add,Sub};
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//转移表
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:>");
//			scanf_s("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("结果是:%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误");
//		}
//		
//	}while (input);
//
//	return 0;
//}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int  j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j = 1] = tmp;
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

struct S
{
	char name[20];
	int age;
};

//qsort 排序整型
void test1()
{
	//排序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
	int sz = sizeof(arr) / sizeof(arr[1]);
	
	print_arr(arr, sz);
	qsort(arr, sz, 4, cmp_int);
	print_arr(arr, sz);


	return 0;
}


int main()
{
	int arr1[] = { 9,8,7,6,5,4,3,2,1,0, };
	int sz = sizeof(arr1) / sizeof(arr1[1]);
	bubble_sort(arr1, sz);
 
	float arr2[] = { 2.0,1.0,3.0,0 };
	bubble_sort(arr2, );
	return 0;
}
