#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	//data��һƬ�����Ŀռ�
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼���ˣ��޷����\n");
		return;
	}
	//������ϵ��
	printf("����������:>\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("������ϵ�˳ɹ�\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	//���ű�ʾ�����
	printf("%-20s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	return -1;//�Ҳ���
}

void DeleteContact(Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��,�޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>\n");
	scanf("%s", name);
	//����ָ����ϵ��
	int pos = FindByName(pc, name);//�±�
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	else
	{
		//ɾ��
		int j = 0;
		for ( j = pos; j < pc->sz-1; j++)
			//sz-1 ���sz��999 ���ʵ����ľ���998,998+1û��Խ��
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ��ָ����ϵ�˳ɹ�\n");
	}
}