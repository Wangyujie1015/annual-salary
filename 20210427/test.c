#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	//
//	if (strlen(arr1) != strlen(arr2))
//	{
//		printf("no");
//		return 0;
//	}
//	stencat(arr1, arr1, 6);
//	char *ret = strstr(arr1, arr2);
//	//如果arr2是arr1的子串,返回子串的起始地址
//	// 	   如果不是,返回NULL空指针
//	//strcat(arr1, arr1);
//	if (ret == NULL)
//	{
//		printf("no");
//
//	}
//	else
//	{
//		printf("yes");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abdeee";
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdefcd";
//	char* ret = strstr(arr, "cd");
//	if(ret != NULL)
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "ahiusdh@asdh.ad";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr1);
//	char arr2[] = "@.";
//	char* p = NULL;
//	for (p = strtok(tmp, arr2); p != NULL; p = strtok(NULL, arr2))
//	{
//		printf("%s\n", p);
//	}
//	//char* ret1 = strtok(tmp, arr2);
//	//char* ret2 = strtok(NULL, arr2);
//	//printf("%s\n%s", ret1,ret2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "cde";
//	//char p = arr1;
//	//printf("%d", p);
//	char* str = strstr(arr1, arr2);
//	printf("%s\n", str);
//	return 0;
//}

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	return 0;
}