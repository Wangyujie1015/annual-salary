#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//Ѱ���ַ���
int main()
{
	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, src); //�ȿ���һ��
	strcat(tmp, src); //������һ��
	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�        
	return 0;
}
////������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//									
//							if (a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}



////������
//int main()
//{
//	char a = 0;
//	for (a = 'A'; a <= 'D'; a++)
//	{
//		if ((a != 'A') +
//			(a == 'C') +
//			(a == 'D') +
//			(a != 'D') == 3)
//		{
//			printf("%c\n", a);
//		}
//	}
//
//	return 0;
//}




////��ӡ�������

//int main()
//{
//	int s = 1;
//	int i ,j;
//	printf("1\n");
//	for (i = 2; i < 10;s=1, i++)
//	{
//		printf("1 ");
//		
//		for (j = 1; j <= i-2; j++)
//		{
//			printf("%d ", (s = (i - j) * s / j));
//		}
//		printf("1\n");
//	}
//	
//
//
//
//	return 0;
//}
