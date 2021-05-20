#define _CRT_SECURE_NO_DEPRECATE 1
#include "contact.h"
#include<stdio.h>
void add_contact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->date[pc->sz].name);
		printf("请输入电话:>");
		scanf("%s", pc->date[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s",pc->date[pc->sz].addr);
		printf("请输入QQ:>");
		scanf("%s",pc->date[pc->sz].qq);
		printf("请输入性别:>");
		scanf("%s",pc->date[pc->sz].sex);
		printf("请输入年龄:>");
		scanf("%d",&(pc->date[pc->sz].age));

		pc->sz++;
		printf("添加成功\n");
	}
}

void show_contact(Contact* pc)
{
	int i = 0;
	printf("%10s %12s %20s %5s %12s %5s\n ",
		"名字", "电话", "地址", "年龄", "QQ", "性别");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s %12s %20s %5d %12s %5s\n", pc->date[i].name,
			pc->date[i].tele,
			pc->date[i].addr, 
			pc->date[i].age,
			pc->date[i].qq,
			pc->date[i].sex
		);
	}
}