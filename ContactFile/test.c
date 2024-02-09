#define _CRT_SECURE_NO_WARNINGS


#include "Contact.h"


void menu()
{
	printf("**************************************************\n");
	printf("***********  1.��Ӻ���    2.ɾ������  ***********\n");
	printf("***********  3.���Һ���    4.�޸ĺ���  ***********\n");
	printf("***********  5.��ʾ�б�    6.��������  ***********\n");
	printf("***********  7.�洢        0.�˳�ͨѶ¼  *********\n");
	printf("**************************************************\n");
}


int main()
{
	int choice = 0;
	//����ͨѶ¼
	struct Contact con;  //con��ͨѶ��������1000��Ԫ�ص������size
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &choice);

		switch (choice)
		{
		case EXIT:
			//����ͨѶ¼ �ͷŶ�̬���ٵ��ڴ�
			SaveContact(&con);
			DestroyContact(&con);
			printf("�ټ���\n");
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
			printf("�������������ѡ��\n");
			break;
		}

	} while (choice);

	return 0;
}