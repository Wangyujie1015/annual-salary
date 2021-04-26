#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//char arr1[20] = { 0 };
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//
//}

//int main()
//{
//	char arr1[20] = "asd";
//	char arr2[] = "qdw";
//	strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}


void left_move(char* str, int n)
{
	int i = 0;
	int len = strlen(str);
	for (i = 0; i < n; i++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + len - 1) = tmp;
	}
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "efabcd";
	int i = 0;
	int len = strlen(arr1);

	for(i=0;i<len;i++)
	{
		left_move(arr1, 1);
		if (strcmp(arr1, arr2) == 0)
		{
			printf("YES\n");
			break;
		}

	}
	if (i == len)
	{
		printf("NO\n");
	}
	//left_move(arr1, 2);
	//printf("%s\n", arr);
	return 0;
}