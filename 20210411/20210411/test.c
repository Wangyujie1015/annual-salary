#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#define SIZE 50 
//int main()
//{
//	typedef void(*pf_t)(int);
//
//
//	return 0;
//}


////���в���
//int main() {	//�����ź�˳�������������в��� 
//	int i;
//	int m, n;
//	int mid, k;
//	char o;
//	int a[SIZE];
//
//	for (i = 0; i < SIZE; i++)
//		a[i] = i;
//
//	/*
//	n Ϊ��߽磬m Ϊ�ұ߽�
//	*/
//	m = SIZE - 1;	//mΪa����ĳ���-1
//	n = 0;
//	mid = (m + n) / 2;	//�м�ֵ 
//
//	scanf("%d", &k);	//������Ҫ���ҵ����� 0 �� (SIZE-1) ֮�� 
//
//	while (1){
//		if (k == a[mid]){
//			printf("%d", mid);	//����±� 
//			break;
//		}
//		else if (k < a[mid]){
//			m = mid - 1;
//			mid = (m + n) / 2;
//		}
//		else {
//			n = mid + 1;
//			mid = (n + m) / 2;
//		}
//	}
//
//	return 0;
//}


int BinSearch(int arr[], int len, int key)                          //�۰���ҷ������ַ���
{
	int low = 0;                         //�����ʼ��С
	int high = len - 1;                 //�����ʼ���
	int mid;                            //�����м�ֵ
	while (low <= high)
	{
		//mid=(low+high)/2;//���ܻ����
		mid = low + ( high - low) / 2;           //���м�ֵ
		if (key == arr[mid])               //�ж�min��key�Ƿ����
			return mid;
		else if (key>arr[mid])             //���key>mid  ��������Ϊ[mid+1,high]
			low = mid + 1;
		else                                       //���key<mid  ��������Ϊ[low,mid-1]
			high = mid - 1;
	}
	return -1;                             //�����������Ŀ��ֵkey���򷵻� -1 ��
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };                      //����Ҫ������arr��������
	printf("%d \n", BinSearch(arr, (sizeof(arr) / sizeof(arr[0])), 7));
	return 0;
}
