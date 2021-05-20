//
//类型的声明+函数的声明
//

#define MAX 1000

#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 100
#define MAX_QQ 12
#define MAX_SEX 5

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	int age;
}PeoInfo;

typedef struct Contact
{
	PeoInfo date[MAX];
	int sz;
}Contact;

//添加一个人的信息
void add_contact(Contact* pc);

//显示一个人的信息
void show_contact(Contact* pc);