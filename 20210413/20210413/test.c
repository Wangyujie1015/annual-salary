#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//
//int main()
//{
//
//
//
//	return 0;
//}


//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
int main()
{
    int i, j, k;
    printf("\n");
    for (i = 1; i < 5; i++) { // 以下为三重循环
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) { // 确保i、j、k三位互不相同
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
}


//一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？



int main()
{

    float h, s;
    h = s = 100;
    h = h / 2; //第一次反弹高度
    for (int i = 2; i <= 10; i++)
    {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
    return 0;

}



//删除一个字符串中的指定字母

char* deleteCharacters(char* str, char* charSet)
{
    int hash[256];
    if (NULL == charSet)
        return str;
    for (int i = 0; i < 256; i++)
        hash[i] = 0;
    for (int i = 0; i < strlen(charSet); i++)
        hash[charSet[i]] = 1;
    int currentIndex = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (!hash[str[i]])
            str[currentIndex++] = str[i];
    }
    str[currentIndex] = '\0';
    return str;
}


int main()
{

    char s[2] = "a";     // 要删除的字母
    char s2[5] = "aca";  // 目标字符串
    printf("%s\n", deleteCharacters(s2, s));
    return 0;

}