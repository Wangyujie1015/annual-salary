#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//返回值为char* ,是为了实现链式访问
 char* my_strcpy(char* dest, const char* src)
{
	 char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		/**dest = *src;
		*dest++;
		*src++;*/
		;
	}
	return ret;
}


//int main()
//{
//	char* str1 = "abcdef";
//	char arr[20] = { 0 };
//	strcpy(arr, str1);
//	printf("%s", arr);
//	return 0;
//}

 char* my_strcat(char* dest, const char* src)
 {
	 char* ret = dest;
	 assert(dest != NULL);
	 assert(src != NULL);
	 //1,找到原地址的'\0'
	 while (*dest)
	 {
		 dest++;
	 }
	 //2,拷贝
	 while (*dest++ = *src++)
	 {
		 ;
	 }
	 return ret;
 }


 //int main()
 //{
	// char arr1[20] = "hello";
	// my_strcat(arr1, " world");
	// printf("%s\n", arr1);

	// return 0;
 //}

 int my_strcmp(const char* s1, const char* s2)
 {
	 assert(s1);
	 assert(s2);
	 while (*s1 == *s2)
	 {
		 if (*s1 == '\0')
			 return 0;
		 s1++;
		 s2++;
	 }
	 //if (*s1 > *s2)
	 //{
		// return 1;
	 //}
	 //else
	 //{
		// return -1;
	 //}
	 return *s1 - *s2;
 }

 int main()
 {
	 char arr1[] = "qwoijr";
	 char arr2[] = "wqer";
	 printf("%d", my_strcmp(arr1, arr2));
	 return 0;
 }