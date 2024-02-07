#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX          1000
#define DEFAULLT_SZ  3

#define MAX_NAME     20
#define MAX_SEX      5
#define MAX_TELE     12
#define MAX_ADDR     30

enum
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//定义一个通讯录类型
struct Contact
{
	struct PeoInfo* data;// 存放一个信息
	int capacity;//当前通讯录的最大容量
	int size;//记录当前已经有的个数
};


void InitContact(struct Contact* ps);
void CheckCapacity(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
#endif /*__CONTACT_H__*/

