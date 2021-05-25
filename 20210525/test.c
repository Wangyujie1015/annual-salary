#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>


//int main()
//{ 
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file");
//		return 1;
//	}
//	fgets();
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pfRead = fopen("test1.txt", "r");
	if (pfRead == NULL)
	{
		return 1;
	}
	FILE* pfWrite = fopen("test2.txt", "w");
	if (pfWrite == NULL)
	{
		fclose(pfRead);
		pfRead = NULL;
		return 1;
	}
	int ch = 0;
	while ((ch = fgetc(pfRead)) != EOF)
	{
		fputc(ch, pfWrite);
	}

	fclose(pfRead);
	pfRead = NULL;
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}