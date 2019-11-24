#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//    1

//int Multiplication (int* n) {
//	for (int i=1; i<= *n; i++) {
//		for (int a = 1; a <= i; a++) {
//			int b = i * a;
//			printf("%d*%d=%d\t", i,a,i * a);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}


//  2
//int exchange(int* x, int* y) {
//	int num;
//	num = *x;
//	*x = *y;
//	*y = num;
//
//}



// 3实现闰年
//int year(int x) {
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//
//	else
//		return 0;
//}
//int a;
//scanf("%d", &a);
//if (year(a) == 1)
//printf("是闰年\n");
//else
//printf("不是闰年\n");


//4 创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//int arr[] = {0};
//int inti_arr(int sz)//初始化函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//顺序输出
//	}
//	printf("\n");
//	return 1;
//}
//int reverse_arr(int sz)//逆置函数
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)//定义左右变量实现循环
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];//互换
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (i = 0; i < sz; i++)//逆置后数组输出
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 2;
//}
//void empty_arr(int sz)//清空函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 3;
//}
//
//int main()
//{
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小赋值
//	int selectNum;
//	printf("请定义你的数组大小：\n");
//	scanf("%d", &sz);
//	printf("请输入你的数组元素：\n");//输入数组元素
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//		printf("请选择你的操作");
//		printf("1 初始化数组\n");
//		printf("2 数组倒置\n");
//		printf("3 数组清空\n");
//		scanf("%d", &selectNum);
//		switch (selectNum)
//		{
//		case 1:
//			inti_arr(sz);
//			break;
//		case 2:
//			reverse_arr(sz);
//			break;
//		case 3:
//			empty_arr(sz);
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}

//5
//int judge(int* n) {
//
//	for (int i = 2; i < *n; i++)
//	{
//		if (*n % i == 0)
//		{
//			printf("不是素数\n");
//			return 0;
//		}
//	}
//	printf("是素数\n");
//	return 0;
//
//}
int main()
{
	int a;
	scanf("%d", &a);
	while (1)
	{
		int a;
		scanf("%d", &a);
		judge(&a);
	}


	system("pause");
	return 0;

}



