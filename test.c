#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//
//void myqsort(void* base, size_t l, size_t size, int, int(*compar)(const void*, const void*))
//{
//
//}
//

//int max(int a, int b)
//{
//	if (a > b)
//	
//		return a;
//	
//	else
//		return b;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	
//	printf("%d\n", max(a, b));
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 2,1,3 };
//	int i = 0;
//	for (int i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (int j = 0; j < 2 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i <= 2; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 3 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//
//}

//int main()
//
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int i = 1000;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100) != 0)||(i%400==0))
//		{
//			sum++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			sum++;
//		if (i / 10 == 9)
//			sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}

void mult(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{			
			printf("%d x %d=%d ", j, i, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	mult(a);
	return 0;
}