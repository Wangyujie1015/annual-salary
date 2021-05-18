#include<stdio.h>

//typedef struct Node
//{
//	int date;
//	struct Node* next;
//
//}Node;
//
// 
//struct Point
//{
//	int x;
//	int y;
//};
//struct  Node
//{
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Point p = { 3,5 };
//	printf("x=%d y=%d\n", p.x, p.y);
//	struct Node n = { {5,9},NULL };
//	printf("x=%d y=%d", n.p.x, n.p.y);
//	return 0;
//}


//struct S
//{
//	char a1;  //¶ÔÆëÊı
//	int b;     //
//	char a2;
//};
//
//int mian()
//{
//	struct S s = {0};
//	return 0;
//}
//#pragma pack(4)
//
//struct S
//{
//	char c1;
//	double d;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S ));
//	return 0;
//}
int main()
{
    int i_num = 0x12345678;
    printf("[0]:0x%x\n", *((char*)&i_num + 0));
    printf("[1]:0x%x\n", *((char*)&i_num + 1));
    printf("[2]:0x%x\n", *((char*)&i_num + 2));
    printf("[3]:0x%x\n", *((char*)&i_num + 3));
   /* i_num = htonl(i_num);
    printf("[0]:0x%x\n", *((char*)&i_num + 0));
    printf("[1]:0x%x\n", *((char*)&i_num + 1));
    printf("[2]:0x%x\n", *((char*)&i_num + 2));
    printf("[3]:0x%x\n", *((char*)&i_num + 3));*/
    return 0;
}