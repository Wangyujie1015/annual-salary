#include <stdio.h>
#define N 10



int main()
{
    int a[N] = { 0,1,2,3,4,5,6,7,8,9 };
    int i, t;
    printf("原始数组是:\n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    for (i = 0; i < N / 2; i++)
    {
        t = a[i];
        a[i] = a[N - 1 - i];
        a[N - 1 - i] = t;
    }
    printf("\n排序后的数组:\n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}



//反转字符串
//void reverse(char* s)
//{
//    // 获取字符串长度
//    int len = 0;
//    char* p = s;
//    while (*p != 0)
//    {
//        len++;
//        p++;
//    }
//
//    // 交换 ...
//    int i = 0;
//    char c;
//    while (i <= len / 2 - 1)
//    {
//        c = *(s + i);
//        *(s + i) = *(s + len - 1 - i);
//        *(s + len - 1 - i) = c;
//        i++;
//    }
//}
//


//int main()
//{
//    char s[] = "www.runoob.com";
//    printf("'%s' =>\n", s);
//    reverse(s);           // 反转字符串
//    printf("'%s'\n", s);
//    return 0;
//}