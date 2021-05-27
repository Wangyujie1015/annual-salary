#include<stdio.h> 
#include<string.h>
struct birthday {         /*定义生日结构,年·月·日*/
    int year;
    int month;
    int day;
};
struct person {
    char name[10];
    struct birthday birth;       /*定义生日成员，嵌套入个人信息*/
    char phonenumber[20];
};
int main(void)
{
    int i, n, j, choice, index;
    char namex[10], namey[10], phonex[20];
    struct person persons[50], temp;

    printf("请输入通讯录中的联系人人数:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {                           /*开始输入通讯录信息*/
        printf("请输入此联系人的姓名:");
        scanf("%s", persons[i].name);
        printf("请输入生日:");
        scanf("%d.%d.%d", &persons[i].birth.year, &persons[i].birth.month, &persons[i].birth.day);
        printf("请输入联系电话:");
        scanf("%s", &persons[i].phonenumber);
        printf("\n");
    }
    while (1) {
        /*输出选项菜单*/
        printf("\n");
        printf("以下为本程序为您提供的通讯录功能选项:(输入数字以选择功能)\n");
        printf("查询通讯录成员个人信息请输入'1';\n");
        printf("修改通讯录成员电话号码请输入'2';\n");
        printf("将通讯录成员按年龄从大到小排序请输入'3';\n");
        printf("输出通讯录所有信息请输入'4';\n");
        printf("退出通讯录服务请输入'0';\n");
        printf("请输入您的选项(数字):");
        scanf("%d", &choice);
        printf("\n");
        if (choice == 0) {                 /*选项为‘0’时，退出程序*/
            break;
        }
        switch (choice) {
        case 1:                                  /*功能一：查找*/
            printf("请输入您要查找的联系人姓名:");
            scanf("%s", namex);
            for (i = 0; i < n; i++) {
                if (strcmp(namex, persons[i].name) == 0) {
                    printf("\n");
                    printf("姓名:%s\n", persons[i].name);
                    printf("生日:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                    printf("联系电话:");
                    puts(persons[i].phonenumber);
                    printf("\n");
                    break;
                }
            }
            break;
        case 2:                                    /*功能二：修改*/
            printf("请输入您要修改的联系人姓名:");
            scanf("%s", namey);
            printf("请为您的联系人设置新的联系电话:");
            scanf("%s", phonex);
            for (i = 0; i < n; i++) {
                if (strcmp(namey, persons[i].name) == 0) {
                    strcpy(persons[i].phonenumber, phonex);
                    printf("\n");
                    printf("姓名：%s\n", persons[i].name);
                    printf("生日:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                    printf("联系电话：");
                    puts(persons[i].phonenumber);
                    printf("\n");
                    break;
                }
            }
            break;
        case 3:                                 /*功能三：排序*/
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
            for (i = 0; i < n; i++) {                            /*输出排序后的通讯录*/
                printf("\n");
                printf("姓名:%s\n", persons[i].name);
                printf("生日:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                printf("联系电话：");
                puts(persons[i].phonenumber);
                printf("\n");
            }
            break;
        case 4:                             /*功能四：输出*/
            for (i = 0; i < n; i++) {
                printf("\n");
                printf("姓名:%s\n", persons[i].name);
                printf("生日:%d.%d.%d\n", persons[i].birth.year, persons[i].birth.month, persons[i].birth.day);
                printf("联系电话：");
                puts(persons[i].phonenumber);
            }
            break;
        default:
            printf("\n");
            printf("\n");
            printf("\n");
            printf("您好！您所输入的数字在程序中没有与之对应的功能。\n");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("感谢您的使用！\n");


    return 0;
}
