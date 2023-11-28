#define _CRT_SECURE_NO_WARNINGS
#include "project.h"


//
//void menu(void)
//{
//	printf("********************************\n");
//	printf("********** 1、开始游戏 *********\n");
//	printf("********** 0、退出游戏 *********\n");
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
//		printf("请选择:\n");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("再见！");
//			break;
//		default:
//			printf("选择无效，请重新选择");
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
		menu();
		printf("请输入你的选择：");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("再见！\n");
			break;
		default:
			printf("输入错误，请重新输入选择！\n");
			break;
		}

	} while (choice != 0);
}

int main()
{
	test();
	return 0;
}