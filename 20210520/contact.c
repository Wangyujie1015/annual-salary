#define _CRT_SECURE_NO_DEPRECATE 1
#include "contact.h"
#include<stdio.h>
void add_contact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->date[pc->sz].name);
		printf("������绰:>");
		scanf("%s", pc->date[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s",pc->date[pc->sz].addr);
		printf("������QQ:>");
		scanf("%s",pc->date[pc->sz].qq);
		printf("�������Ա�:>");
		scanf("%s",pc->date[pc->sz].sex);
		printf("����������:>");
		scanf("%d",&(pc->date[pc->sz].age));

		pc->sz++;
		printf("��ӳɹ�\n");
	}
}

void show_contact(Contact* pc)
{
	int i = 0;
	printf("%10s %12s %20s %5s %12s %5s\n ",
		"����", "�绰", "��ַ", "����", "QQ", "�Ա�");
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