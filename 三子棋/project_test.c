#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
#include "game.h"
//#include <time.h>
//
//
//
//
////����ģ��
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1��������Ϸ **********\n");
//	printf("*********** 0���˳���Ϸ **********\n");
//	printf("**********************************\n");
//}
//
//
//void test()
//{
//	int choice = 0;
//	do
//	{
//		menu();
//		printf("������ѡ��");
//		scanf("%d", &choice);
//		while (getchar() != '\n');
//		
//		switch (choice)
//		{
//		case 0:
//			printf("�ټ���\n");
//			break;
//		case 1:
//			game();
//			break;
//
//		default:
//			printf("����������������룡");
//			break;
//		}
//	} while (choice != 0);
//	
//}
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	test();
//	return 0;
//}




void meun(void)
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
		meun();
		printf("��ѡ��");
		scanf("%d", &choice);

		switch (choice)
		{
		case 0:
			printf("�ټ���");
			break;
		case 1:
			game();
			break;
		
		default:
			printf("����������������룡");
			break;
		}
	} while (choice!=0);
}

int main()
{
	
	test();
	return 0;
}