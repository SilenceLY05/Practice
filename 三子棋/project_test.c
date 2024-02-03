#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
#include "game.h"
//#include <time.h>
//
//
//
//
////测试模块
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1、继续游戏 **********\n");
//	printf("*********** 0、退出游戏 **********\n");
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
//		printf("请输入选择：");
//		scanf("%d", &choice);
//		while (getchar() != '\n');
//		
//		switch (choice)
//		{
//		case 0:
//			printf("再见！\n");
//			break;
//		case 1:
//			game();
//			break;
//
//		default:
//			printf("输入错误，请重新输入！");
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
	printf("********** 1、开始游戏 *********\n");
	printf("********** 0、退出游戏 *********\n");
	printf("********************************\n");
}




void test(void)
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择：");
		scanf("%d", &choice);

		switch (choice)
		{
		case 0:
			printf("再见！");
			break;
		case 1:
			game();
			break;
		
		default:
			printf("输入错误，请重新输入！");
			break;
		}
	} while (choice!=0);
}

int main()
{
	
	test();
	return 0;
}