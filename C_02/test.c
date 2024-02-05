#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

////当前知道的内存的使用方式主要两种：1.创建一个变量 局部变量 - 栈区 全局变量 - 静态区  2.创建一个数组
////C语言中可以创建边长数组 - C99中增加的
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[50];//50个struct S类型的数据
//
//	return 0;
//}


////动态内存分配 - 堆区 
////主要涉及4个函数 - malloc free calloc realloc
//int main()
//{
//	//向内存申请10个整形空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//
//		}
//	}
//	//当空间动态申请的空间不再使用的时候，就应该还给操作系统
//	free(p);
//	p = NULL;//
//	return 0;
//}

////calloc C语言还提供了一个函数calloc来动态内存分配  void* calloc(size_t num,size_t size);
////函数的功能是为num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	int  i = 0;
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


////realloc 可以做到对动态开辟内存大小的调整 void* realloc(void* ptr,size_t size);返回值为调整之后的内存起始位置，
////函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间
//
////realloc使用注意事项：1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
////2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域，开辟一块满足需求的空间，
////并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
////3.需要用一个新的变量来接收realloc函数的返回值
//
//int main()
//{
//	int* p = (int*)malloc(20);

	////realloc实现和malloc相同的功能
	//int* p = (int*)realloc(NULL, 40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		
//	}
//	//就是在使用malloc开辟的20个字节空间 ，假设这里20个字节不够用了希望能有40个字节的空间，此时可以使用realloc来调整
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

////常见的动态内存错误
//
//int main()
//{
//	////1.对NULL指针的解引用操作 - malloc开辟失败
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	////3.对非动态开辟内存使用free释放
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//	////4.使用free释放一块动态开辟内存的一部分空间
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////p指针的位置发生变化 释放失败
//	//free(p);
//	//p = NULL;
//
//	////5.对同一块动态内存多次释放
//	//int* p = (int*)malloc(10);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//
//	//free(p);
//	//p = NULL;
//	//free(p);
//
//	////6.动态开辟内存忘记释放(内存泄漏)
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	 
//
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//并没有将str地址传给GetMemory函数，str以值传递的形式给了p，p是GetMemory函数的形参，
//	//只能函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
//	strcpy(str, "hello world");//str内部此时依旧存着NULL，将字符串复制到NULL指针处会发生非法访问，程序会在这里崩溃
//	printf(str);
//}
//
//int main()
//{
//
//	Test();
//	return 0;
//}

////修改正确的代码1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//并没有将str地址传给GetMemory函数，str以值传递的形式给了p，p是GetMemory函数的形参，
//	//只能函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
//	strcpy(str, "hello world");//str内部此时依旧存着NULL，将字符串复制到NULL指针处会发生非法访问，程序会在这里崩溃
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////修改正确的代码2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//并没有将str地址传给GetMemory函数，str以值传递的形式给了p，p是GetMemory函数的形参，
//	//只能函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
//	strcpy(str, "hello world");//str内部此时依旧存着NULL，将字符串复制到NULL指针处会发生非法访问，程序会在这里崩溃
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";//局部变量只能在函数内部生效，函数结束后局部变量开辟的内存会还给操作系统
//	return *p;// 
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();//会出现非法访问内存的现象，输出随机值
//	return 0;
//}

//int* test()
//{
//	//static int a = 10;//此时a在静态区 程序不会出错
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);//这个时候也没问题 malloc开辟的空间在堆区
//	return ptr;
//}
//
//int main() 
//{
//	int* p = test();
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//忘记释放动态开辟的内存，导致内存泄漏
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后,并不会把str置为NULL
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//内存已经释放，再次对这块内存进行操作是非法访问内存
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


////柔性数组 : 结构中的最后一个元素允许时未知大小的数组，这就叫做柔性数组成员
//// 结构中柔性数组成员前，至少有一个成员，sizeof返回的这种结构大小不包括柔性数组的内存
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;

//struct S
//{
//	int n;
//	int arr[];//未知大小 - 柔性数组成员，数组的大小是可以调整的
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i] = i);
//	}
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//struct S
//{
//	int n;
//	char c;
//	int arr[0];
//};
//
//int main()
//{
//	int i = 0;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 100;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

