#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	//data是一片连续的空间
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录满了，无法添加\n");
		return;
	}
	//输入联系人
	printf("请输入名字:>\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加联系人成功\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	//负号表示左对齐
	printf("%-20s\t%-5s\t%-5s\t%-13s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-13s\t%-20s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindByName(const Contact* pc, char name[])
{
	int i = 0;
	for ( i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name,name) == 0)
		{
			return i;
		}
	}
	return -1;//找不到
}

void DeleteContact(Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空,无法删除\n");
		return;
	}
	printf("请输入要删除人的名字:>\n");
	scanf("%s", name);
	//查找指定联系人
	int pos = FindByName(pc, name);//下标
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	else
	{
		//删除
		int j = 0;
		for ( j = pos; j < pc->sz-1; j++)
			//sz-1 如果sz是999 访问到最大的就是998,998+1没有越界
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除指定联系人成功\n");
	}
}