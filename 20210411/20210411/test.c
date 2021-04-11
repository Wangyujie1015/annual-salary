#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#define SIZE 50 
//int main()
//{
//	typedef void(*pf_t)(int);
//
//
//	return 0;
//}


////折中查找
//int main() {	//对于排好顺序的数组进行折中查找 
//	int i;
//	int m, n;
//	int mid, k;
//	char o;
//	int a[SIZE];
//
//	for (i = 0; i < SIZE; i++)
//		a[i] = i;
//
//	/*
//	n 为左边界，m 为右边界
//	*/
//	m = SIZE - 1;	//m为a数组的长度-1
//	n = 0;
//	mid = (m + n) / 2;	//中间值 
//
//	scanf("%d", &k);	//输入需要查找的数在 0 到 (SIZE-1) 之间 
//
//	while (1){
//		if (k == a[mid]){
//			printf("%d", mid);	//输出下标 
//			break;
//		}
//		else if (k < a[mid]){
//			m = mid - 1;
//			mid = (m + n) / 2;
//		}
//		else {
//			n = mid + 1;
//			mid = (n + m) / 2;
//		}
//	}
//
//	return 0;
//}


int BinSearch(int arr[], int len, int key)                          //折半查找法（二分法）
{
	int low = 0;                         //定义初始最小
	int high = len - 1;                 //定义初始最大
	int mid;                            //定义中间值
	while (low <= high)
	{
		//mid=(low+high)/2;//可能会溢出
		mid = low + ( high - low) / 2;           //找中间值
		if (key == arr[mid])               //判断min与key是否相等
			return mid;
		else if (key>arr[mid])             //如果key>mid  则新区间为[mid+1,high]
			low = mid + 1;
		else                                       //如果key<mid  则新区间为[low,mid-1]
			high = mid - 1;
	}
	return -1;                             //如果数组中无目标值key，则返回 -1 ；
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };                      //首先要对数组arr进行排序
	printf("%d \n", BinSearch(arr, (sizeof(arr) / sizeof(arr[0])), 7));
	return 0;
}
