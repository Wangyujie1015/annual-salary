#include<stdio.h>
#include<Windows.h>
#include<string.h>


struct S
 {
	char name[20];
	int age;
};


int cmp_stu_by_age(const void* e1,const void* e2)
{
	return ((struct S*)e1)->age - ((struct S*)e2)->age;

}


int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);

}
//qsort排序结构体数组


void _Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}


void bubble_sort(void* base, int sz,int width,
				int(*cmp)(const void* e1,const void* e2))
{
	int i;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width )> 0)
			{
				//交换
				_Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}




}

void test2()
{
	struct S arr[] = { {"zhangsan",20},{"list",80 },{"wangwu",5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}


void test3()
{
	struct S arr[] = { {"zhangsan",20},{"list",80 },{"wangwu",5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}


int main()
{

	test3();
	return 0;
}