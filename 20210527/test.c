#include<stdio.h> 
#include<string.h>
struct birthday {         /*�������սṹ,�ꡤ�¡���*/
    int year;
    int month;
    int day;
};
struct person {
    char name[10];
    struct birthday birth;       /*�������ճ�Ա��Ƕ���������Ϣ*/
    char phonenumber[20];
};
int main(void)
{
    int i, n, j, choice, index;
    char namex[10], namey[10], phonex[20];
    struct person persons[50], temp;

    printf("������ͨѶ¼�е���ϵ������:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {                           /*��ʼ����ͨѶ¼��Ϣ*/
        printf("���������ϵ�˵�����:");
        scanf("%s", persons[i].name);
        printf("����������:");
        scanf("%d.%d.%d", &persons[i].birth.year, &persons[i].birth.month, &persons[i].birth.day);
        printf("��������ϵ�绰:");
        scanf("%s", &persons[i].phonenumber);
        printf("\n");
    }
    while (1) {
        /*���ѡ��˵�*/
        printf("\n");
        printf("����Ϊ������Ϊ���ṩ��ͨѶ¼����ѡ��:(����������ѡ����)\n");
        printf("��ѯͨѶ¼��Ա������Ϣ������'1';\n");
        printf("�޸�ͨѶ¼��Ա�绰����������'2';\n");
        printf("��ͨѶ¼��Ա������Ӵ�С����������'3';\n");
        printf("���ͨѶ¼������Ϣ������'4';\n");
        printf("�˳�ͨѶ¼����������'0';\n");
        printf("����������ѡ��(����):");
        scanf("%d", &choice);
        printf("\n");
        if (choice == 0) {                 /*ѡ��Ϊ��0��ʱ���˳�����*/
            break;
        }
        switch (choice) {
        case 1:                                  /*����һ������*/
            printf("��������Ҫ���ҵ���ϵ������:");
            scanf("%s", namex);
            for (i = 0; i < n; i++) {
                if (strcmp(namex, persons[i].name) == 0) {
                    printf("\n");
                    printf("����:%s\n", persons[i].name);
                    printf("����:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                    printf("��ϵ�绰:");
                    puts(persons[i].phonenumber);
                    printf("\n");
                    break;
                }
            }
            break;
        case 2:                                    /*���ܶ����޸�*/
            printf("��������Ҫ�޸ĵ���ϵ������:");
            scanf("%s", namey);
            printf("��Ϊ������ϵ�������µ���ϵ�绰:");
            scanf("%s", phonex);
            for (i = 0; i < n; i++) {
                if (strcmp(namey, persons[i].name) == 0) {
                    strcpy(persons[i].phonenumber, phonex);
                    printf("\n");
                    printf("������%s\n", persons[i].name);
                    printf("����:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                    printf("��ϵ�绰��");
                    puts(persons[i].phonenumber);
                    printf("\n");
                    break;
                }
            }
            break;
        case 3:                                 /*������������*/
            for (i = 0; i < n - 1; i++) {
                index = i;
                for (j = i + 1; j < n; j++) {
                    if (persons[j].birth.year < persons[index].birth.year) {
                        index = j;
                    }
                    else if (persons[j].birth.year == persons[index].birth.year && persons[j].birth.month < persons[index].birth.month) {
                        index = j;
                    }
                    else if (persons[j].birth.year == persons[index].birth.year && persons[j].birth.month == persons[index].birth.month && persons[j].birth.day < persons[index].birth.day) {
                        index = j;
                    }
                }
                temp = persons[index];
                persons[index] = persons[i];
                persons[i] = temp;
            }
            for (i = 0; i < n; i++) {                            /*���������ͨѶ¼*/
                printf("\n");
                printf("����:%s\n", persons[i].name);
                printf("����:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                printf("��ϵ�绰��");
                puts(persons[i].phonenumber);
                printf("\n");
            }
            break;
        case 4:                             /*�����ģ����*/
            for (i = 0; i < n; i++) {
                printf("\n");
                printf("����:%s\n", persons[i].name);
                printf("����:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                printf("��ϵ�绰��");
                puts(persons[i].phonenumber);
            }
            break;
        default:
            printf("\n");
            printf("\n");
            printf("\n");
            printf("���ã���������������ڳ�����û����֮��Ӧ�Ĺ��ܡ�\n");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("��л����ʹ�ã�\n");


    return 0;
}
