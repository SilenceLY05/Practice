#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

////程序设计过程中文件有两种：程序文件、数据文件
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct _iobuf
//{
//	char* _ptr;
//	int _cnt;
//	char* _base;
//	int _flag;
//	int _file;
//	int _charbuf;
//	int _bufsiz;
//	char* tmpfname;
//};
//typedef struct _iobuf FILE;


////编译程序的时候，在打开文件的同时，都会返回一个FILE*的指针变量指向该文件，也相当于建立了指针和文件的关系
//// FILE* fopen(const char* filename,const char* mode)
////int fclose(FILE* stream)
//int main()
//{
//	//打开文件
//	////相对路径
//	// ".."表示上一级路径   "."表示当前路径
//	// //fopen("../file.txt", "r")
//	//fopen("file.txt", "r")
//	//绝对路径
//	/*fopen("G:\\C-project\\C_03\\file.txt", "r");*/
//	FILE* pf = fopen("file.txt", "r");
//	if (pf = NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	
//	//读文件
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputc('B', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfread = fopen("TEST.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	printf("%c ", fgetc(pfread));
//	printf("%c ", fgetc(pfread));
//	printf("%c ", fgetc(pfread));
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}


//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		pritnf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int ch = fgetc(pf);
//	pritnf("%c", ch);
//	ch = fgetc(pf);
//	pritnf("%c",ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//fgets(arr, 1024, pf);
//	//printf("%s\n", arr);
//
//	fputs("hello", pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	////从键盘读取一行文本信息
//	//char buff[1024] = { 0 };
//	////fgets(buff, 1024, stdin);
//	////fputs(buff, stdout);//输出到标准输出流
//	//gets(buff);
//	//puts(buff);
//	
//	return 0;
//}

//struct S
//{
//	int n;
//	float scores;
//	char arr[10];
//
//};
//
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.scores, s.arr);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float scores;
//	char arr[10];
//
//};


//int main()
//{
//	struct S s = { 0 };
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL)
//	//{
//	//	return 0;
//	//}
//	////格式化的输入数据
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.scores), &(s.arr));
//	//printf("%d %f %s", s.n, s.scores, s.arr);
//
//	//fclose(pf);
//	//pf = NULL;
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.scores), &(s.arr));
//	fprintf(stdout,"%d %f %s", s.n, s.scores, s.arr);
//	return 0;
//}

//对比一组函数
//scanf/fscanf/sscanf
//printf/fprintf/sprintf
// scanf/printf 是针对标准输入流/标准输出流的格式化输入/输出语句
//fscanf/fprintf 是针对所有输入流/输出流的格式化输入/输出语句
//sscanf/sprintf 是针对输入流/输出流的格式化输入/输出语句
//sscanf是从字符串中读取格式化的数据  sprintf是把格式化数据输出成(存储到)字符串
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	char buff[1024] = { 0 };
//	struct S tmp = { 0 };
//	//把格式化的数据转换成字符串存储到buff
//	sprintf(buff, "%d %f %s", s.n, s.score, s.arr);
//	//从buff中读取格式化的数据到tmp中
//	sscanf(buff, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	//printf("%s\n", buff);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////fseek 根据文件指针的位置和偏移量来定位文件指针  int fseek(FILE* stream,long offset,int origin)
////ftell 返回文件指针相对于起始位置的偏移量  long int ftell(FILE* stream)
////rewind 让文件指针的位置回到文件的起始位置 void rewind(FILE* stream)
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//fseek(pf, 3, SEEK_SET);
//	int ch = fgetc(pf);
//
//	printf("%c\n", ch);
//	//int pos = ftell(pf);
//	//printf("%d", pos);
//	rewind(pf);
//	fgetc(pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////文件结束判定，在文件读取过程中，不能用feof函数的返回值直接用来判断文件是否结束，而应用于当文件读取结束的时候，
////判断是读取失败结束还是遇到文件尾结束
////文本文件读取是否结束判断返回值是否为EOF(fgetc)或者NULL(fgets)
////二进制文件的读取结束判断，判断返回值是否下雨实际要读的个数
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp)
//	{
//		//perror 
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF)
//	{
//		putchar(c);
//	}
//	//判断结束原因
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//在ANSI C的任何一种实现中，存在两个不同的环境 第一种是翻译环境，在这个环境中源代码被转换为可执行的机器指令
//第二种是执行环境，它用于实际执行代码
// test.c -> test.i -> test.s -> test.o
//翻译环境包括：编译器和链接器 其中编译器由预编译 编译 汇编三个步骤组成
//预编译/预处理：1.#include 头文件的包含 2.注释删除，使用空格替换注释 3.#define 都是文本操作
//编译：把C代码翻译成汇编代码 进行了1.语法分析 2.词法分析 3.语义分析 4.符号汇总
//汇编：把汇编代码转换成了二进制指令，形成符号表
//链接器：1.合并段表 2.符号表的合并和符号表的重定位
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		pritnf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//预定义符号
//__FILE__  进行编译的源文件
//__LINE__  文件当前的行号
//__DATE__  文件被编译的日期
//__TIME__  文件被编译的时间
//__STDC__  如果编译器遵循ANSI C,其值为1，否则未定义


//int main()
//{
//	//printf("%s\n %s :%s\n", __FILE__,__DATE__,__TIME__);
//	//printf("%d\n", __LINE__);
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	if (pf = NULL)
//	{
//		return 0;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line: %d date:%s time:%s i = %d ", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define name   stuff
//#define reg register   为register这个关键字，创建一个简短的名字
//#define do_forever   for(;;)   用更形象的符号来替换一种实现
//#define CASE break;case      在写case语句的时候自动把break写上
//如果定义的stuff过长，可以分为几行，除了最后一行外，每行的最后都要加一个反斜杠(续行符)\


//#define机制包括了一个规定，允把参数替换到文本中，这种实现通常称为宏(macro)或定义宏(define macro)
//#define name(parament - list) stuff其中的parament-list是一个由逗号隔开的符号表，他们可能出现在stuff中
//注意：参数列表的左括号必须与name紧邻，如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分
 


//#和##
//使用#，把一个宏参数变成对应的字符串
//##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符

//void print(int a)
//{
//	printf("the value of a is %d \n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(b);
//	return 0;
//}


//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello""world\n");
//
//	int a = 10;
//	//PRINT(a);
//
//	return 0;
//}

//#define CAT(X,Y)  X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//	printf("%d \n", CAT(Class, 84));
//	//printf("%d\n"，Class##84);
//	//printf("%d\n"，Class84);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a + 1;//1
//	int b = ++a;//2
//
//	return 0;
//}


////带副作用的宏参数
//#define MAX(X,Y)   ((X>Y)?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++ > b++) ? a++ : b++);
//	printf("%d\n", max);//11  12
//	printf("%d\n", a);//11    11
//	printf("%d\n", b);//12    13
//	return 0;
//}

//#define TEST(X,Y) printf("test\n")
//
//int main()
//{
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = SIZEOF(float);
//	return 0;
//}

//#define MALLOC(X,TYPE)  (TYPE*)malloc(X*sizeof(TYPE))  
//
//int main()
//{
//	int* p = MALLOC(10, int);
//
//	return 0;
//}


////#undef 指令用于移除一个宏定义
//
//#define MAX  100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//	return 0;
//}


//命令行定义


////条件编译
//#define __DEBUG__
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d ",arr[i]);
//#endif
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 1
//		printf("%d ",arr[i]);
//#endif
//	}
//	return 0;
//}

//#if 常量表达式
//
//#endif
//
////多个分支的条件编译
//#if 常量表达式
//
//#elif 常量表达式
//
//#else
//
//#endif 

////判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//
//#if !defined(symbol)
//#ifndef symbol

////嵌套指令
//#if defined(OS_UNIX)
//	#ifdef OPTION1
//
//	#endif
//	#ifdef OPTION2
//	#endif
//#elif defined(OS_MSDOS)
//	#ifdef OPTION2
//
//	#endif // OPTION2
//#endif

//#define DEBUG 0
//
//int main()
//{
////#if defined(DEBUG)
////	printf("hehe\n");
////#endif
//
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}



////模拟实现offset宏
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name)   (int)&(((struct_name*)0)->member_name)
//int main()
//{
//	struct S s; 
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//
//}


//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


////一个数组中只有两个数字是出现一次，其他所有数字都是出现了两次，编写一个函数找出这两个只出现一次的数字
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* arr1 = (int*)malloc(sz * sizeof(int));
//	int* arr2 = (int*)malloc(sz * sizeof(int));
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] & 1) == 1)
//		{
//			arr1[j] = arr[i];
//			j++;
//		}
//		else
//		{
//			arr2[k] = arr[i];
//			k++;
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		ret1 = arr1[i] ^ ret1;
//	}
//	for (i = 0; i < k; i++)
//	{
//		ret2 = arr2[i] ^ ret2;
//	}
//	printf("只出现过一次的数字是：%d和%d\n", ret1, ret2);
//	free(arr1);
//	free(arr2);
//	arr1 = NULL;
//	arr2 = NULL;
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//遍历整个数组得到只出现过一次的两个数的XOR结果
//	int XorAll = 0;
//	for (i = 0; i < sz; i++)
//	{
//		XorAll ^= arr[i];
//	}
//
//	//找到两个只出现过一次数的不同位
//	int mask = 1;
//	while ((XorAll & mask) == 0)
//	{
//		mask = mask << 1;
//	}
//
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] & mask) == 0)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("只出现过一次的数字为:%d %d", num1, num2);
//
//	return 0;
//}



//写一个宏 可以将一个整数的二进制奇数位和偶数位交换
#define EXCHANGE(num)    ((num&0xAAAAAAAA)>>1)+((num&0x55555555)<<1)
int main()
{
	//10100101110011110011010110101111
	int num = 0;
	scanf("%d", &num);

	printf("%d", EXCHANGE(num));
	return 0;
}