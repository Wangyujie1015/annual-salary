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


//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
int main()
{
    int i, j, k;
    printf("\n");
    for (i = 1; i < 5; i++) { // ����Ϊ����ѭ��
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) { // ȷ��i��j��k��λ������ͬ
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
}


//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�



int main()
{

    float h, s;
    h = s = 100;
    h = h / 2; //��һ�η����߶�
    for (int i = 2; i <= 10; i++)
    {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("��10�����ʱ��������%f�ף���10�η�����%f��\n", s, h);
    return 0;

}



//ɾ��һ���ַ����е�ָ����ĸ

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

    char s[2] = "a";     // Ҫɾ������ĸ
    char s2[5] = "aca";  // Ŀ���ַ���
    printf("%s\n", deleteCharacters(s2, s));
    return 0;

}