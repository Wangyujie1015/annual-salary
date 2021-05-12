#include<stdio.h>
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	
//	while (count--)
//	{
//
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//
//	}
//	return ret;
//}


void* my_memmove(void* dest, const void* src, size_t count)
{

	if (dest < src)
	{
		
		while (count--)
		{
			
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;

		}
	}

	else
	{
		while (count--)
		{
			
			*((char*)dest + count) = *((char*)src + count);
		}
	}
}


int main()
{
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9,10 };



	/*int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	for (int i = 0; i <= 9; i++)
	{
		printf("%d", arr2[i]);
	}*/
	
	return 0;
}