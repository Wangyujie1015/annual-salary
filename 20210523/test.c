#include<stdio.h>
#include<stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("remalloc");
//	}
//	else
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ",p[i] = i);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//free��ʹ�����ֲ��淶
////1.�ͷŵĶ�̬�ռ��Ѿ����ı�
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//		if (p == NULL)
//		{
//			perror("malloc");
//		}
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*p = i;
//			p++;
//		}
//		free(p);
//		p = NULL;
//		return 0;
//}

//2.freeһ��Ƕ�̬���ٵ��ڴ�
//int main()
//{
//	int a = 1;
//	int* p = &a;
//	free(p);
//	return 0;
//}

//3.��ͬһ�鶯̬���ٵ��ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//		if (p == NULL)
//		{
//			perror("malloc");
//		}
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*p = i;
//	
//		}
//		int* q = p;
//		free(p);
//		free(q);
//		p = NULL;
//		return 0;
//}


//4.��̬�����ڴ������ͷ�(�ڴ�й©)
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}


void GetMemory2(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}

int main()
{

	Test();
	return 0;
}