
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int c[5] = { 5,4,3,2,1 }; 
	int b;
	for (int i = 0; i < 5; i++) {	
	b = a[i];
	a[i] = c[i];
	c[i] = b;
	}
	 for (int t = 0; t < 5; t++)
	{
	printf("a[%d]=%d  ", t, a[t]);
	}
	 printf("\n");
	 for (int t = 0; t < 5; t++)
	 {
		 printf("c[%d]=%d  ", t, c[t]);
	 }
2
	double sum=1.0;
	double a = 1;
	for (int i = 2; i <= 100; i++) {
		a = (-1)*a;
		sum = sum + a / i;
	}
	printf("sum=%f\n", sum);
3
	int num = 0;
	for (int j = 1; j <= 100; j++) {
		for (int i = j; i; i /= 10) {
			if (i % 10 == 9) {
				num ++;
			}
		}
	}
	printf("%d", num);
	system("pause");
	return 0; 
}



