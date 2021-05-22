#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<stdlib.h>
//
//int main()
//{
//	 int* p = (int* )malloc(100);
//	 if (p == NULL)
//	 {
//		 perror("malloc");
//	 }
//	 else
//	 {
//		 int i = 0;
//		 for (i = 0; i < 25; i++)
//		 {
//			 *(p + i) = i;
//		 }
//
//		 for (i = 0; i < 25; i++)
//		 {
//			 printf("%d ",*(p + i));
//		 }  
//		 //回收释放内存
//		 free(p);
//		 p = NULL;
//	 }
//	return 0;
//}
//
//
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	int* ptr = (int*)realloc(p, 20 * sizeof(int)); 
	return 0;
}