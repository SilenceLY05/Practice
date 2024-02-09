#define _CRT_SECURE_NO_WARNINGS


#include "Contact.h"


void menu()
{
	printf("**************************************************\n");
	printf("***********  1.添加好友    2.删除好友  ***********\n");
	printf("***********  3.查找好友    4.修改好友  ***********\n");
	printf("***********  5.显示列表    6.条件排序  ***********\n");
	printf("***********  7.存储        0.退出通讯录  *********\n");
	printf("**************************************************\n");
}


int main()
{
	int choice = 0;
	//创建通讯录
	struct Contact con;  //con是通讯里，里面包含1000个元素的数组和size
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &choice);

		switch (choice)
		{
		case EXIT:
			//销毁通讯录 释放动态开辟的内存
			SaveContact(&con);
			DestroyContact(&con);
			printf("再见！\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("输入错误，请重新选择。\n");
			break;
		}

	} while (choice);

	return 0;
}