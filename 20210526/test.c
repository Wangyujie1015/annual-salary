#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { "张三百",20,99.2f };
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("open");
//		return 1;
//	}
//	fwrite(&s,sizeof(s),1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("test.dat", "rb");
//	if (pf == NULL)
//	{
//		perror("open");
//		return 1;
//	}
//	//读文件
//	fread(&s,sizeof(s),1,pf);
//	printf("%s %d %f", s.name, s.age,s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

void save_contact(Contact* pc)
{
	int i = 0;
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		perror("open");
		return ;
	}
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->date+i,sizeof(PeoInfo),1,pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;

}

void load_contact(Contact* pc)
{

	PeoInfo* tmp = 0;
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		perror("open");
		return ;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		pc->date[pc->sz] = tmp;

	};
	fclose(pfRead);
	pfRead = NULL;
}