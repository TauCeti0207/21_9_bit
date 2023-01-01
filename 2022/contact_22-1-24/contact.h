#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<memory.h>
#include<assert.h>
#include<string.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12
typedef struct Peoinfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}Peoinfo;

//通讯录的结构体
typedef struct Contact
{
	Peoinfo data[MAX];
	int sz;//通讯录中有效信息的个数
}Contact;

void InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(const Contact* pc);
void DeleteContact(Contact* pc);