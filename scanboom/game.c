#define _CRT_SECURE_NO_WARNINGS
#include "project.h"


//
//void menu(void)
//{
//	printf("********************************\n");
//	printf("********** 1����ʼ��Ϸ *********\n");
//	printf("********** 0���˳���Ϸ *********\n");
//	printf("********************************\n");
//}
//
//
//void test(void)
//{
//	int choice = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		
//		menu();
//		printf("��ѡ��:\n");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�ټ���");
//			break;
//		default:
//			printf("ѡ����Ч��������ѡ��");
//			break;
//		}
//	} while (choice != 0);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}




void menu(void)
{
	printf("********************************\n");
	printf("********** 1����ʼ��Ϸ *********\n");
	printf("********** 0���˳���Ϸ *********\n");
	printf("********************************\n");
}


void test(void)
{
	int choice = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ټ���\n");
			break;
		default:
			printf("�����������������ѡ��\n");
			break;
		}

	} while (choice != 0);
}

int main()
{
	test();
	return 0;
}