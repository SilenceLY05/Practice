#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>


////%d--整型
////%s--打印字符串
////%c--打印字符
////%f--打印小数
////%p--以地址的形式打印
////%x--16进制的形式打印
//
//int main()
//{
////	short age = 20;      //向内存申请2个字节=16Bit位，用来存放20
//	//float weight = 94.5f; //向内存申请4个字节，存放小数
//
//		//输入函数 scanf() 
//	//scanf("%d%f", &age, &weight);
//
//	//char p[] = "hello world";
//	//printf("%s", p);
//
//	//char *p = "hello world";
////	printf("%s",p);
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//
//	scanf("%d%d",&num1,&num2);
//
//	num3 = num1 + num2;
//	printf("%d",num3);
//
//
//
//
//
//	return 0;
//}

//#define 定义的标识符常量
//枚举常量
//枚举关键字 - enum
//enum Sex
//{
//	male,
//	female,
//	secret
//
//};
//
//int main()
//{
//	//const - 常属性
//	int num = 8;
//	3;  //字面常量
//
//	const int n = 2;  //n是变量，但是又有常属性，所以我们说n是常变量
//
//	printf("%d",num2);
//
//	return 0;
//}





//字符串：由双引号引起来的一串字符称为字符串字面值，或者简称字符串。
//字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容。

//int main()
//{
//	//数据在计算机行存储的时候，存储的是二进制
//	//'\0' - 0
//	//'a' - 97
//	char arr[] = "abd";  //将字符串存入数组
//	char arr2[] = { 'a','b','c','\0' };
//	int num = sizeof(arr);
//	int num1 = sizeof(arr[0]);
//	printf("%s\n",arr);
//	printf("%s\n",arr2);
//	printf("%d\n",num);
//	printf("%d\n", num1);
//	return 0;
//}

// \? -  在书写连续过个问号时使用，防止他们被解析成三个字母
// \' - 用于表示字符常量
// \" - 用于表示一个字符串内部的双引号
// \\ - 用于表示一个反斜杠，防止它被解释为一个转移序列符
// \a - 警告字符，蜂鸣
// \b - 退格符
// \f - 进纸符
// \n - 换行
// \r - 回车
// \t - 水平制表符 
// \v - 垂直制表符
// \ddd - ddd表示1~3个八进制的数组。如：\130 X
// \xdd - dd表示2个十六进制数字。如：\x30 0

// EOF  - end  of file  - 文件结束标志  值为-1

//int main()
//{
//	printf("%zu\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\132');
//	// \32 -- 32是2个8进制数字
//	// 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	// 32--> 10禁止 26 --> 作为ASCII码值代表的字符
//	printf("%c\n",'\x60');
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	if (a == 1)
//	{
//		printf("WIN");
//	}
//	else
//	{
//		printf("LOSE");
//	}
//	
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", i);
//		printf("\n");
//	}
//	while (j < 20)
//	{
//		printf("%d", j);
//		j++;
//	}
//	return 0;
//}

//2进制位操作
//& 按位与
//| 按位或
//^ 按位异或  对应的二进制位相同则为0
//~ 按位取反

//int main()
//{
//	int a = 0;
//	int b = ~a;   // b有符号的整型  最高位是符号位 为1表示负数，为0表示正数
//	printf("%d", b);  //打印的是这个数的原码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//00000000000000000000000000000000    a
//	//11111111111111111111111111111111    按位取反-b 存储的为补码
//	//11111111111111111111111111111110    反码 - 补码减1
//	//10000000000000000000000000000001    原码 为-1  （补码除符号位，其他位按位取反）
//	return 0;
//}

//int main()
//{
//
//	int a = 3;
//	int b = 3;
//	int c = a && b;
//	printf("c = %d", c);
//	return 0;
//}



//int main()
//{
//	register int a = 10; //建议把a定义成寄存器变量
//	int c = 10;
//	c = -2;   //int 定义的变量是有符号的  将signed省略掉了
//	unsigned int b = -10;//即使b赋值为-10 但由于定义为unsigned，所以b实际赋值为10
//	//在C和C++等语言中，如果你声明了一个变量为无符号（unsigned）类型，然后尝试给它赋一个负值，
//	//实际上是未定义行为。但在实际的实现中，通常会发生的是，这个负数会被转换为无符号类型，
//	//这个转换是通过对最大值加1取模来完成的，这也叫做模数回绕（modular wrap-around）。
//	//例如，如果你的系统中unsigned int是32位的，它可以表示的数值范围是从0到2^32-1也就是0到4294,967,295。
//	//当你尝试将 - 10赋值给这样一个无符号整数时，会发生回绕，实际存储的值将会是：2^32-10 = 4294967286
//	//如果你看到的是-10，这可能是因为你使用的打印函数是按照有符号整数来解释这个值的。比如在C语言中，
//	//如果你使用printf函数并且错误地使用了%d格式化字符串（它是为有符号整数设计的），而不是%u
//	//（它是为无符号整数设计的），那么即使变量是无符号的，输出也可能会错误地显示为一个负数
//	//typedef  类型重定义
//	printf("%u", b);
//	return 0;
//}

//void test()
//{
//	//static 修饰局部变量  
//	//局部变量的生命周期延长了，出了作用域不会被销毁
//
//	//static 修饰全局变量
//	//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没办法再使用
//	
//	//static 修饰函数
//	//改变了函数的链接属性，普通函数具有外部链接属性，static修饰后变为内部链接属性 
//	//extern - 声明外部符号
//	static int a = 1;   //a是一个静态的局部变量
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//
////有一种变量是用来存放地址的 - 指针变量
//int main()
//{
//	int a = 10;  //4个字节
//	int* p = &a;  //取地址
//	printf("%p", &a);  
//	printf("%p", p);   
//	*p = 20;  //* - 解引用操作符  将p存储的地址内的数据改为20 即将a重新赋值为20
//	return 0;
//}



////结构体 - 描述复杂对象 自己创造出来的类型
//struct Book
//{
//	char Name[20];//C语言程序设置
//	short Price;  //价格
//
//};
//
//int main()
//{
//	//利用结构体类型 - 创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("书名：%s\n", b1.Name);
//	printf("价格：%d\n", b1.Price);
//	printf("书名：%s\n", pb->Name);
//	printf("价格：%d\n", pb->Price);
//	printf("书名：%s\n", (*pb).Name);
//	printf("价格：%d\n", (*pb).Price);
//	// . 结构体变量.成员
//	//-> 结构体变量->成员
//	return 0;
//}


//int TestMax(int arr[],int num)
//{
//	int i, j = 0;
//	int temp = 0;
//
//
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	
//}
//
//int main()
//{
//	int myArr[] = { 2,4,1,3,5,6,8,0 };
//	int num = sizeof(myArr) / sizeof(myArr[0]);
//	TestMax(myArr,num);
//	return 0;
//}
//
//int main() 
//{
//	int a = 0;
//	; //是语句 - 空语句
//
//	return 0;
//}
//
////悬空else 
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (num = 5)   //这个地方的num = 5是赋值
//	{
//		printf("呵呵\n");  
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("数字%d为奇数\n", i);
//		}
//
//
//	}
//
//	return 0;
//}

//void Week(int num)
//{
//	switch ( num)  //switch(整形表达式)
//	{
//	case 1:      //case: 整形常量表达式
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期七");
//		break;
//
//	default:
//		break;
//	}
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Week(num);
//	return 0;
//}


//int main()
//{
//
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;  // m = 3
//	case2:
//		n++;  // n = 2
//	case 3:
//		switch (n) // n =2 m = 3
//		{
//		case 1:
//			n++;  // m = 4 n = 3
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//
//
//	case 4:  
//		m++;   //m = 5 n = 3
//		break;
//
//	default:
//		break;
//	}
//	printf("m = %d , n = %d", m, n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue; //continue用于终止本次循环，也就是本次循环中continue后面的代码不会再执行，
//		              //而是直接跳转到whilie语句的判断部分，进行下一次循环的入口判断
//		printf("i = %d  ", i);
//		i++;
//	}
//	return 0;
//}


//int main() 
//{
//	//int ch = 0;
//	////ctrl + z 
//	////EOF - end of file -> -1
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	//缓冲区还剩下一个'\n'，读取一下'\n'
//	getchar();
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("已确认！");
//	}
//	else
//	{
//		printf("取消确认！");
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() )!= EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}



//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}



//int main()
//{
//	//for循环的初始化，调整，判断都可以省略，但是for循环的判断部分如果没省略，那判断条件就是恒为真
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	int x, y = 0;
//	for (x = 0,y = 0;y=0;x++,y++)
//	{
//		printf("%d", y);
//		y++;
//	}
//
//	return 0;
//}
////阶乘函数
//int Cheng(int n)
//{
//	int i = 1;
//	int temp = 1;
//	for (i = 1; i <= n; i++)
//	{
//		temp = temp * i;
//	}
//	return temp;
//}
//
//int main()
//{
//
//	int n = 5;
//	int i = 0;
//	int j = 1;
//	for (j = 1; j <= n; j++)
//	{
//		i = Cheng(j) + i;
//	}
//	printf("i = %d", i);
//
//	return 0;
//}
// 
// 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 5; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 5; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//查找函数
//int binsearch(int x, int v[])
//{
//	int i = 0;
// //sizeof 应用于一个数组时，返回整个数组所占用的字节数，但是仅适用于当前作用域中定义的数组
//	int num = sizeof(v) / sizeof(v[0]);
//	for (i = 0; i < num; i++)
//	{
//		if (v[i] == x)
//		{
//			printf("数值x是数组中的第%d个元素", i);
//		}
//		
//	}
//	if (i == num)
//	{
//		printf("未找到");
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	binsearch(4, arr);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 0,10,13,23,54,65,76,97,108,139 };
//	int i = 0;
//	int k = 65;
//	int num = sizeof(arr) / sizeof(arr[0]);
//	printf("num = %d\n", num);
//	for (i = 0; i < num; i++)
//	{
//		printf("此时i = %d\n", i);
//		printf("此时arr[i] = %d\n", arr[i]);
//		if (arr[i] == k)
//		{
//			printf("数值x是数组中的第%d个元素\n", i);
//			break;
//		}
//
//	}
//	if (i == num)
//	{
//		printf("未找到");
//	}
//	return 0;
//}


//void Midarr(int x, int arr[], int n)
//{
//	int i = 0;
//	int left = 0;
//	int right = n - 1;
//	int mid;
//	for (; left <= right; )
//	{
//		i++;
//		mid = left + (right - left) / 2;
//		if (arr[mid] == x)
//		{
//			printf("找到了，下标为%d，第%d次循环找到的", mid, i);
//			break;
//			//return mid;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//
//	}
//	if (i == n)
//	{
//		printf("未找到，在%d循环后结束\n", i);
//		//return -1;
//	}
//
//}


//void Midarr2(int x, int arr[], int n)
//{
//	int i = 0;
//	int left = 0;
//	int right = n - 1;
//	int mid;
//	int found;
//	while (left<=right )
//	{
//		i++;
//		mid = left + (right - left) / 2;
//		if (arr[mid] == x)
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//			//return mid;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			left = mid+1;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("未找到，在%d循环后结束\n", i);
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 0,10,13,23,54,65,76,97,108,139 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Midarr2(12, arr, num);
//
//	return 0;
//}

//
//void Show2Side(const char *str)
//{
//	int len = strlen(str);
//	//char *arr1=(char*)malloc(len+1);
//	//if (arr1 == NULL)
//	//{
//	//	printf("没有要显示的数据");
//	//	return;
//	//}
//	//	
//
//	////使用'#'初始化arr1
//	//for (int i = 0; i < len; i++)
//	//{
//	//	arr1[i] = '#';
//	//}
//	//arr1[len] = '\0';
//	//printf("%s\n", arr1);
//	char *arr1=malloc(len + 1);
//
//	if (!arr1)
//	{
//		fprintf(stderr, "Memory allocation failed\n");
//		return;
//	}
//
//	memset(arr1, '#', len);
//	arr1[len] = '\0';
//	printf("%s\n", arr1);
//
//	//打印模式
//	for (int i = 0; i < (len+1)/2; i++)
//	{
//		arr1[i] = str[i];
//		arr1[len - 1 - i] = str[len - 1 - i];
//		printf("%s\n", arr1);
//
//		if (i >= (len - 1 - i))
//		{
//			break;
//		}
//	}
//	free(arr1);
//
//}
//
//int main()
//{
//	char line[256];
//	printf("输入字符串: ");
//	if (fgets(line, sizeof(line), stdin) == NULL)
//	{
//		printf("读取输入错误\n");
//		return 1;
//	}
//	line[strcspn(line, "\n")] = '\0';
//	Show2Side(line);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "welcome to visual!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[20] = { 0 };
//	char password[20] = {0};
//	int i = 0;
//
//	printf("请输入账号：>");
//	scanf("%s", arr1);
//	getchar();
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//
//		scanf("%s", password);
//		if (strcmp(password , "123QWE") == 0) //等号不能用来比较两个字符串是否相等，应该使用一个库函数strcmp
//		{
//			printf("密码正确！登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//			
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，请重新登录\n");
//	}
//
//	return 0;
//}

//按从大到小顺序打印输入的 a b c
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		temp = b;
//		b = a;
//		a = temp;
//	}
//
//	if (a < c)
//	{
//		temp = c;
//		c = a;
//		a = temp;
//
//	}
//
//	if (b < c)
//	{
//		temp = c;
//		c = b;
//		b = temp;
//	}
//
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//打印1-100内3的倍数
//int main()
//{
//	int i = 0;
//
//	//scanf("%d", &i);
//	//printf("%d", i * 3);
//
//	//for (i = 1; i < 100; i++)
//	//{
//	//	int j = 0;
//	//	j = i * 3;
//	//	if (j > 100)
//	//	{
//	//		break;
//	//	}
//	//	printf("%d\n", j);
//
//	//}
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

//求最大公约数
//int main()
//{
//	int i, j = 0;
//	int k = 0;
//	int temp = 0;
//
//	scanf("%d%d", &i, &j);
//
//	for (k = 1; (k <= i) || (k <= j); k++)
//	{
//		if ((i % k == 0) && (j % k == 0))
//		{
//			temp = k;
//		}
//	}
//
//	printf("最大公约数为：%d", temp);
//	return 0;
//}


////辗转相除法求最大公约数  更高效
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r =m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


////判断闰年
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("第%d为闰年\n", i);
//		}
//	}
//
//	return 0;
//}

////打印素数  高效方法
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 101; i <= 200; i+=2)
//	{
//		int is_prim = 1;
//		for (j = 3; j <= sqrt(i); j+=2)
//		{
//			if (i % j == 0)
//			{
//				is_prim = 0;
//				break;
//			}
//		}
//		if (is_prim)
//			printf("数字%d为素数\n", i);
//	}
//
//	return 0;
//}
//
////打印素数 穷举法  试除法
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//			printf("数字%d为素数\n", i);
//	}
//
//	return 0;
//}

////数1-100中所有整数中出现9的个数
//int main()
//{
//	int i = 0;
//	int num = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//		}
//		if (i / 10 == 9)
//		{
//			num++;
//		}
//	}
//	printf("总共出现了%d个9", num);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	double num = 0.0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 2 == 1)
//		//{
//		//	num = num + 1.0 / i;
//		//}
//		//if (i % 2 == 0)
//		//{
//		//	num = num - 1.0 / i;
//		//}
//		num += (i % 2 == 1) ? 1.0 / i : -1.0 / i;
//	}
//	printf("所求和为%lf", num);
//
//
//	return 0;
//}

//
////求10个整数中的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = { 2,5,13,34,54,32,12,55,21,99 };
//	int max = arr[0];
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < num; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("数组中的最大数为：%d", max);
//
//	return 0;
//}



////乘法口诀表打印
//int main()
//{
//	int i,j = 0;
//
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d × %d = %2d  ", i, j, j * i);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


////二分查找，有序数组查找具体数字
//int main()
//{
//	int arr[] = { 2,4,6,8,10,12,14,16,18,20,22,23,34,56,77 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int str = 0;
//	scanf("%d", &str);
//	int i = 0;
//
//	while (i <= num)
//	{
//		int mid = i + (num - i) / 2;
//
//		if (arr[mid] == str)
//		{
//			printf("找到了，下标为：%d",mid);
//			break;
//		}
//		else if (arr[mid] > str)
//		{
//			num = mid;
//		}
//		else
//		{
//			i = mid;
//		}
//	}
//	if (i > num)
//		printf("未找到");
//	return 0;
//}



////猜数字游戏
////1.电脑生成随机数
////2.猜数字（猜大猜小都会提示）
//
//
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("********   1.play   ********\n");
//	printf("********   0.exti   ********\n");
//	printf("****************************\n");
//}
//
//int game()
//{
//	int rand_number = rand() % 100 + 1;  //生成的随机数
//	int left = 1;
//	int right = 100;
//	int guss = 0;
//	printf("猜一个1到100之间的数。\n");
//
//	while (1)
//	{
//		printf("请输入你猜的数字（范围%d - %d）:", left, right);
//		scanf("%d", &guss);
//
//		if (rand_number == guss)
//		{
//			printf("恭喜你，猜对了!\n");
//			fflush(stdout);
//			getchar();
//			
//			#ifdef _WIN32
//			system("cls");
//			#else
//			system("clear");
//			#endif		
//
//			return 1;
//		}
//		else if (rand_number > guss)
//		{
//			printf("你猜得比实际的数小\n");
//			left = guss+1;
//
//		}
//		else
//		{
//			printf("你猜的比实际的数大\n");
//			right = guss-1;
//		}
//		if (left > right)
//		{
//			printf("没有可猜的数字了，游戏出错！\n");
//			return 0;
//		}
//	}
//
//}
//
//
//
//int main()
//{
//	//拿时间戳来设置随机数的生成起始点
//	srand((unsigned int)time(NULL));
//
//	int choice;    //主界面的选择
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &choice);
//
//		while (getchar() != '\n');   //清除输入缓冲区
//
//
//		switch (choice)
//		{
//		case 0:
//			printf("再见");
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
//	return 0;
//}




////goto语句
////关机   cmd - 命令行
////shutdown -s -t 60   system() - 执行系统命令
//
//int main()
//{
//	system("shutdown -s -t 60");
//	again:
//	printf("在一分钟之内输入我是猪，否则计算机将关闭\n请输入：");
//	char str[20] = { 0 };
//
//	scanf("%s", &str);
//
//	if (strcmp(str, "我是猪") == 0)//比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////strcpy
//int main()
//{
//	char arr1[] = "bie";
//	char arr2[] = "!!!!!!!!!!";
//
//	strcpy(arr2, arr1);
//	int num = sizeof(arr2);
//	printf("%d", num);
//	printf("%s", arr2);
//
//	return 0;
//}

////memset
//int main()
//{
//	char arr[21] = "OK";
//	memset(arr, 'S', 20);
//	printf("%s", arr);
//	return 0;
//}

////比较较大值
//int return_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int X = return_max(a, b);
//	printf("%d", X);
//
//	return 0;
//}


////交换来个整型变量的内容
// 当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的
//void Swapint(int *a, int* b)
//{
//	int temp = 0;
//	temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//int main()
//{
//	int x = 1;
//	int y = 10;
//	Swapint(&x, &y);
//	printf("%d %d", x, y);
//
//	return 0;
//}


//函数的调用：1、传值调用 函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参
//2、传址调用 把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式，可以让函数和函数外面的变量建立真正联系



////判断是不是素数的函数
//#include <math.h>
//
//int Prime_num(int x)
//{
//	int j = 0;
//	int int_prime = 0;
//	if (x == 2)
//	{
//		int_prime = 1;
//	}
//	else if ((x % 2 == 0)||(x<2))
//	{
//		int_prime = 0;
//	}
//	else
//	{
//		int_prime = 1;
//		for (j = 3; j <= sqrt(x); j += 2)
//		{
//			if (x % j == 0)
//			{
//				int_prime = 0;
//				break;
//				
//			}
//		}
//	}
//	return int_prime;
//}

//int main()
//{
//	int num = 0;
//	int i = 0;
//	printf("输入一个数字判断是否是素数：");
//	if (scanf("%d", &num))
//	{
//		i = Prime_num(num);
//		if (i == 1)
//		{
//			printf("数字%d为素数", num);
//		}
//		else
//		{
//			printf("数字%d不是素数", num);
//		}
//	}
//	else
//	{
//		printf("输入错误。\n");
//	}
//
//	return 0;
//}



////判断是不是闰年
//int Leap_Year(int year)
//{
//	int result = 0;
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		result = 1;
//	}
//	else
//	{
//		result = 0;
//	}
//	return result;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入年份来判断是否是闰年：");
//	scanf("%d", &i);
//	j=Leap_Year(i);
//
//	if (j == 1)
//	{
//		printf("年份%d是闰年", i);
//	}
//	else
//	{
//		printf("年份%d不是闰年", i);
//	}
//
//	return 0;
//}

////实现整型有序数组的二分查找
//void Binary_Search(int search, int arr[], int num)
//{
//	int i = 0;
//	int flag = 0;   //0未排序 1降序 2升序
//	int left = 0;
//	int right = num - 1;
//	int mid;
//
//	for (i = 0; i < num; i++)
//	{
//		if (arr[i-1] > arr[i])
//		{
//			printf("数组arr为降序数组\n");
//			flag = 1;
//			break;
//		}
//		else if (arr[i-1] < arr[i])
//		{
//			printf("数组arr为升序数组\n");
//			flag = 2;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("数组arr不是有序数组，请重新输入");
//		return;
//	}
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//
//		if (search == arr[mid])
//		{
//			printf("找到了，%d在数组中的序号为%d", search, mid);
//			return;
//		}
//		else if (search > arr[mid])
//		{
//			if (flag == 1)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				left = mid + 1;
//			}
//		}
//		else
//		{
//			if (flag == 1)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//	}
//
//	printf("%d不是数组中的元素",search);
//
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,10,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	Binary_Search(12, arr, size);
//	return 0;
//
//}

////写一个函数，每次调用Num值加1
//void Count_Num(void)
//{
//	static int i = 0;
//
//	i++;
//	printf("总共调用%d次函数\n", i);
//}
//
//int main()
//{
//
//	for (int i = 0; i < 10; i++)
//	{
//		Count_Num();
//	}
//
//	return 0;
//}

//void Add(int* p)
//{
//	(* p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d", num);
//
//	return 0;
//}



////函数的嵌套调用和链式访问
//void new_line(void)
//{
//	printf("呵呵\n");
//}
//
//void three_line(void)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//	
//}
//
//int main()
//{
//	three_line();
//	//打印1 < -- 打印2  < -- 打印43返回值为打印的字符个数2        
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


////函数递归：调用自身的编程技巧。必要条件：1、存在限制条件，满足后停止递归。2、每次递归后越来越接近限制条件
////接收一个无符号整型值，打印每一位
//void Sequence_Print(unsigned int num)
//{
//	if (num < 10)
//		printf("%u ", num);
//	else
//	{
//		Sequence_Print(num / 10);
//		printf("%u ", num % 10);
//	}
//
//}

//int main()
//{
//	unsigned int j = 0;
//	printf("输入一个无符号整型数值：");
//	scanf("%u", &j);
//
//	printf("输出的数字为：");
//	Sequence_Print(j);
//	printf("\n");
//
//
//}

//
//void print2(unsigned int number)
//{
//	if (number > 9)
//	{
//		print2(number / 10);
//		//print2(1234)
//		//print2(123) 4
//		//print2(12) 3 4
//		//print2(1) 2 3 4
//	}
//	printf("%u ", number%10);
//}
//
//int main()
//{
//	unsigned int i = 3423423;
//	print2(i);
//
//	return 0;
//}

//数组传参，传过去的不是整个数组，而是首元素的地址
//int strlength(char* str)
//{
//	int i = 0;
//	while (*str != '\0')
//	{
//		i++;
//		str++;
//		//strlength(str);
//	}
//	return i;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str+1));
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "123231231";
//	int num = my_strlen(arr);
//	printf("%d", num);
//	return 0;
//}

////求N的阶乘
//int factorial(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = factorial(i);
//	printf("%d", ret);
//
//	return 0;
//}

////效率较低 
//int Fibonacci(int n)
//{
//	if (n <= 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//
//	}
//}
//
////辅助函数，用于打印
//void printfFibonacci(int n)
//{
//	if (n > 0)
//	{
//		printfFibonacci(n - 1);
//		printf("%d ", Fibonacci(n - 1));
//	}
//}
//
//void Fibonacci2(int n)
//{
//	int a = 0;
//	int b = 1;
//
//	if (n <= 0)
//	{
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1)
//		{
//			printf("%d ", a);
//			continue;
//		}
//		if (i == 2)
//		{
//			printf("%d ", b);
//			continue;
//		}
//
//		int next = a + b;
//		a = b;
//		b = next;
//		printf("%d ", next);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Fibonacci2(i);
//	return 0;
//}

////汉诺塔问题
//void Hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		printf(" % c-> % c\n", A, C);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf(" % c-> % c\n", A, C);
//		Hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

////递归法
//int Frog_Jump(int n)
//{
//	if (n <= 0)
//		return;
//	if (n == 1)
//	{
//		return  1;
//	}
//	else if (n == 2)
//	{
//		return  2;
//	}
//	else
//	{
//		return Frog_Jump(n - 1) + Frog_Jump(n - 2);
//		 
//	}
//}
//
////迭代法
//int Frog_Jump2(int n)
//{
//	if (n < 0)
//		return;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	int a = 1;
//	int b = 2;
//	int temp = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		temp = a + b;
//		a = b;
//		b = temp;
//	}
//	return b;
//}
//
//int main()
//{
//	int i = 0;
//	printf("青蛙跳几阶台阶：");
//	scanf("%d", &i);
//	int num = Frog_Jump(i);
//	printf("共有%d种跳法", num);
//}


////数组初始化
//int main()
//{
//	int arr[10] = { 1,2,3 }; //不完全初始化，剩下的元素默认初始化为0
//	return 0;
//}


////1.strlen 和 sizeof没有什么关联
////2.strlen 是求字符串长度的 - 只能针对字符串求长度 - 库函数 - 使用需要引用头文件
////3.sizeof 计算变量、数组、类型的大小 - 单位是字节 是一种操作符
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));  //随机值 数组内没有'\0'所以输出随机值
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr1[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n ", &arr1[i][j]);
//		}
//	}
//
//	return 0;
//}

////冒泡排序
////arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素地址 &arr[0]
//void Bubble_sort(int arr[], int num)
//{
//	int i, j, temp = 0;
//
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1; //假设要排序的数据已经有序
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j+1];
//				arr[j+1] = arr[j ];
//				arr[j ] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,23,4,2,3,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Bubble_sort(arr, sz);
//	
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////数组名是数组首元素的地址(有两个例外)
////1.sizeof内部单独放数组名 -- 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
////2.&数组名，数组名代表的是整个地址
//int main()
//{
//	int arr[] = { 0,10,10,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);// &arr取出的是数组的地址
//	printf("%p\n", &arr+1);
//	return 0;
//}


////三子棋更简洁有效的写法
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <time.h>
//
//#define PLAYER 'X'
//#define COMPUTER 'O'
//#define EMPTY ' '
//
//void PrintBoard(char board[3][3]) {
//    printf("\n");
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf(" %c ", board[i][j]);
//            if (j < 2) printf("|");
//        }
//        printf("\n");
//        if (i < 2) printf("-----------\n");
//    }
//    printf("\n");
//}
//
//bool CheckWin(char board[3][3], char player) {
//    // Check rows, columns, and diagonals
//    for (int i = 0; i < 3; i++) {
//        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
//            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
//            return true;
//        }
//    }
//    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
//        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
//        return true;
//    }
//    return false;
//}
//
//bool IsBoardFull(char board[3][3]) {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (board[i][j] == EMPTY) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//void GetPlayerMove(char board[3][3]) {
//    int row, col;
//    do {
//        printf("Enter your move (row[1-3] col[1-3]): ");
//        scanf("%d %d", &row, &col);
//        row--; // Adjust for 0 index
//        col--; // Adjust for 0 index
//    } while (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != EMPTY);
//
//    board[row][col] = PLAYER;
//}
//
//void GetComputerMove(char board[3][3]) {
//    int row, col;
//    do {
//        row = rand() % 3;
//        col = rand() % 3;
//    } while (board[row][col] != EMPTY);
//
//    board[row][col] = COMPUTER;
//}
//
//void InitializeBoard(char board[3][3]) {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            board[i][j] = EMPTY;
//        }
//    }
//}
//
//int main() {
//    char board[3][3];
//    InitializeBoard(board);
//
//    srand((unsigned int)time(NULL)); // Initialize random seed
//
//    while (true) {
//        PrintBoard(board);
//        GetPlayerMove(board);
//        if (CheckWin(board, PLAYER)) {
//            PrintBoard(board);
//            printf("Congratulations! You've won!\n");
//            break;
//        }
//        if (IsBoardFull(board)) {
//            PrintBoard(board);
//            printf("It's a tie!\n");
//            break;
//        }
//
//        GetComputerMove(board);
//        if (CheckWin(board, COMPUTER)) {
//            PrintBoard(board);
//            printf("Computer wins!\n");
//            break;
//        }
//        if (IsBoardFull(board)) {
//            PrintBoard(board);
//            printf("It's a tie!\n");
//            break;
//        }
//    }
//
//    return 0;
//}
//
//#define ROW        10
//#define COL        10
//
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if(j<col-1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("___");
//				if (j < col - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//
//	}
//}
//
//int main()
//{
//	char board[ROW][COL] = {0};
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	
//	return 0;
//}


////对于移位运算符，不要移动负位数，这个是标准未定义
//int main()
//{
//	int a = -1;
//	//>>--右移操作符
//	//移动的是二进制位
//	/*右移操作符：
//	  1.算数右移：右边丢弃左边补原符号位，通常为算术右移
//	  2.逻辑右移：右边丢弃，左边补0*/
//
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//
//	int b = a >> 1;
//	int c = a << 1;
//
//	//左移操作符：左边丢弃，右边补0
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


////& - 按位与
////^ - 按位异或，对应的二进制相同为0，不同为1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	
//	printf("%d", c);
//
//	return 0;
//}



////交换两个变量，不使用第三个变量
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	////加减法 - 可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d", a, b);
//
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//
//	return 0;
//}


////当输入为正数时可以正常显示，但是如果输入为负数将会出错
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while(num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	for (int i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 0x1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	short s = 1;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	printf("%d", sizeof(short));
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}



//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//
//}
//
//void test2(char ch[])
//{
//
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//先判断a a为0 ，后面的b,d都没有计算 但是a自增了1，所以 a = 1,b=2,c=3,d=4; 逻辑与左边如果算出的为假，右边无论是什么都不计算
// 
//	//i = a++ && ++b && d++;
//	//逻辑或运算，左边为真，右边无论是什么都不计算，如果左边为假，再算右边 
//	 i = a++ || ++b||d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);
//
//	return 0;
//}


//int main()
//{
//	char a, b, c;
//	a = 3;
//	b = 127;
//	c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//10110110  第一位为符号位
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6) //整型提升时，第一位符号位为1，补全为32位前面全为1，不相等
//		printf("a");
//	if (b == 0xb600)//b 与 a同理
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));  //1 - char类型占一个字节
//	printf("%u\n", sizeof(+c)); //4 - 进行运算，进行整型提升，变为4个字节
//	printf("%u\n", sizeof(!c)); //1 - 
//
//	return 0;
//}



////算术转换 - 某个操作符的各个操作数类型不同，除非其中一个操作数的转换为另一个操作数的类型，否则无法进行。
//int main()
//{
//	float f = 3.14;
//	int num = f;//隐式转换，会有精度丢失
//
//	return 0;
//}

//复制表达式的求值会有三个影响的因素：1、操作符的优先级。2、操作符的结合性。3、是否控制求值顺序



////指针 - 是编程语言的对象，利用地址，它的值直接指向存在电脑中的另一个地方的值。地址指向该变量单元，将地址称为指针
////指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
////int* p    *p能够访问4个字节
////char* p   *p能够访问1个字节
////double* p *p能够访问8个字节
//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	int* pb = &a;
//	*pc = 0;//此时a = 0x11223300
//	*pb = 0;//此时a = 0x00000000
//
//	return 0;
//}

////指针类型决定了，指针走一步走多远（指针的步长）
////int* p    p+1 --> 4
////char* p   p+1 --> 1
////double* p p+1 --> 8
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}



////野指针：指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
////成因：1.指针未初始化 2.指针越界访问 3.指针指向的空间释放
//int main()
//{
//	////未初始化
//	//int* p;//局部的指针变量，就被初始化随机值
//	//*p = 20;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//
//	return 0;
//}

//int* test(void)
//{
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
//
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//当指针为空时，不能访问。
//	pa = NULL;//NULL 用来初始化指针,给指针赋值
//	
//	
//	if(a != NULL)
//	{
//		
//
//	}
//	
//
//	return 0;
//}




//指针运算
////指针+-整数
//
////#define N_VALUES   5
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *p);
//	//	p += 1;
//	//}
//
//	//float values [N_VALUES] ;
//	//float* vp;
//	//for (vp = &values[0]; vp < &values[N_VALUES];)
//	//{
//	//	*vp++ = 0;
//	//}
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//int* my_str(char* arr)
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return ( & arr[i] - &arr[0]);
//}
//
//
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式
//	char arr[] = "bitssss";
//	
//	int len = my_str(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//指针的关系运算
//标准规定：允许指向数组元素的指针和指向数组最后一个元素后面的那个内存位置的指针比较，
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较

//#define N_VALUES   5
//int main()
//{
//	float values [N_VALUES] ;
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//
//	////这种书写方式不建议
//	//for (vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
//	//{
//	//	*vp = 0;
//	//}
//
//	return 0;
//}


//
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr); //地址 - 首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//数组名一般为首元素地址，但有两个例外
//	//1.&arr - &数组名 - 数组名不是首元素地址，数组名表示整个数组
//	//2.sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组
//
//	return 0;
//}


////二级指针
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}


////指针数组 - 数组 - 存放指针的数组
////数组指针 - 指针
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p \n", arr[i]);
//		printf("%d \n", *(arr[i]));
//	}
//
//	return 0;
//}

//void Booble(int arr[],int num)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < num; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//
//	int arr[10] = { 21,2,4,1,6,8,32,11,22,56 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Booble(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void Init(int arr[], int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void My_print(int arr[], int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reserse(int arr[], int num)
//{
//	int i = 0;
//	int temp = 0;
//	int mid = 0;
//
//
//	mid = num / 2;
//	for (i = 0; i < mid; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[num - i-1];
//		arr[num - i-1] = temp;
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	My_print(arr, sz);
//	reserse(arr, sz);
//	My_print(arr, sz);
//	Init(arr, sz);
//	My_print(arr, sz);
//
//	return 0;
//}

//void SwapArr(int arr[], int arr2[], int num)
//{
//	int temp = 0;
//	int i = 0;
//
//	for (i = 0; i < num; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr2[i];
//		arr2[i] = temp;
//
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i = 0;
//	SwapArr(arr, arr2, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//
//	return 0;
//}


//int i;  //全局变量不初始化默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i)) //sizeof() - 计算变量/类型所占内存的大小 >= 0 无符号数 
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

////求两个二进制中不同位的个数
//int CompareBit(int X, int Y)
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((X >> i) & 1) !=( (Y >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
////优化方法
//int CompareBit(int x, int y)
//{
//	int diff = x ^ y;
//	int count = 0;
//	while (diff != 0)
//	{
//		diff = diff & (diff - 1);
//		count++;
//	}
//	return count++;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int ret = CompareBit(a, b);
//	printf("%d", ret);
//	return 0;
//}

////高效方法
//int SwapOddEven2(int a)
//{
//	int odd = a & 0x55555555;
//	int even = a & 0xAAAAAAAA;
//	odd <<= 1;
//	even >>= 1;
//	return odd | even;
//}
//
//int SwapOddEven(int a)
//{
//	int i = 0;
//	int temp = 0;
//	int odd = 0, even = 0;
//
//	for (i = 0; i < 32; i += 2)
//	{
//		odd = (a >> i) & 1;
//		even = (a >> (i + 1)) & 1;
//		temp |= (even << i) | (odd << (i + 1));
//	}
//	return temp;
//}
//
//int main()
//{
//
//
//	return 0;
//}
//
//
//
////统计二进制数中1的个数
//int CountOne(int a)
//{
//	int count = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
////高效计算二进制数中1的个数
//int CountOne2(int a)
//{
//	int count = 0;
//
//	while (a != 0)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = CountOne2(a);
//	printf("%d", ret);
//
//	return 0;
//}


////不添加临时变量交换两个数
//int main()
//{
//	int a = 10;
//	int b = 30;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//
//	return 0;
//}


//void p_print(int arr[], int num)
//{
//	int* ptr = &arr[0];
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,20 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	p_print(arr, sz);
//	return 0;
//}
// 
////使用递归的方法实现字符串反转
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* string)
//{
//	int length = my_strlen(string);
//	if (length > 1)
//	{
//		char temp = string[0];
//		string[0] = string[length - 1];
//		string[length - 1] = '\0';
//		reverse_string(string + 1);
//		string[length - 1] = temp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

////整型各位相加
//int DigitalSum(unsigned int n)
//{
//	if (n == 0)
//		return 0;
//	else
//		return n % 10 + DigitalSum(n / 10);
//}


////递归实现n的k次方
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / Pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}



//结构体：结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量

////struct 结构体关键字 Stu结构体标签  struct stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;  //s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu是类型
//
//
//int main()
//{
//	//struct Stu S;//局部结构体变量
//	Stu s1 = { "张三",20,"12341342324","男" };
//	struct Stu s2 = { "李四",20,"12341342324","女" };
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world";
//	struct T t = { "hehe",{100,'w',"hello fzu",2.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	return 0;
//}

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu是类型
//
//
//void Print1(Stu tmp)  //传递的形参为结构体变量，使用结构成员时使用.符号
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* tmp) //传递的形参为结构体地址，使用结构成员时使用->符号  这种方式较好
//{
//	printf("name:%s\n", tmp->name);
//	printf("age:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//
//int main()
//{
//	Stu s = { "李四",20,"12312313123","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//数据结构
//线性数据结构 - 顺序表 链表 栈 队列
//树形数据结构 - 二叉树 

////传参时会有压栈操作  栈：先进后出，后进先出  插入一个元素叫压栈，删除一个元素叫出栈
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//
//	return 0;
//}

//Debug - Debug版本的可执行程序 可以调试的，因为文件中包含了调试信息，并且不做任何优化
//Release - Release版本的可执行程序 往往进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好的使用
////Debug版本会出现死循环 Release版本会正常执行
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

////F9切换断电
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//
//}

//
////求1！+2！+……+n！
//int Factorial(int n)
//{
//	int i = 0;
//	int ret = 1;
//	if (n == 0)
//		return 0;
//	else
//	{
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//	}
//	return ret;
//}
//
////递归法
//int Factorial2(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Factorial2(n - 1);
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		sum += Factorial(i);
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

////死循环的原因：当i>9的时候，arr[10]会出现越界非法访问，当访问arr[12]时，arr[12]与i的地址为同一个，
////此时改变arr[12]的值就相当于改变了i的值，使i的值变为0进入死循环
//
////1.栈区的默认使用：先使用高地址处的空间再使用低地址处的空间
////2.数组随着下标的增长地址是由低到高变化的
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//
//	}
//
//	return 0;
//}

////仅实现字符串拷贝功能
//void my_strcpy(char arr1[], char arr2[])
//{
//	int i = 0;
//	int num = strlen(arr2);
//	for (i = 0; i <= num; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//}
//
//
////改进方法
//char* my_strcpy2(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);//断言
//	assert(arr2 != NULL);
//	if (arr2 == NULL || arr1 == NULL)
//		return NULL;
//	char* ptr = arr1;
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//		//*arr1++ = *arr2++;与上面三个式子等效
//	}
//	*arr1 = '\0';
//	//也可以实现上面while语句的效果
//	//while (*arr1++ = *arr2++)
//	//{
//	//}
//	return ptr;
//}
//
//int main()
//{
//	char arr1[] = "#################";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int n = 100;
//	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
//	//const 放在指针变量的*右边时，修饰的是指针变量p本身，也就是p不能被改变了
//	const int* p = &num;
//	*p = 20;//err 
//	p = &n;
//	pritnf("%d\n", num);
//	return 0;
//}


//unsigned int my_strlen(const char* str)
//{
//	if (str == NULL)
//		return NULL;
//	unsigned int i = 0;
//	while (*str++ != 0)
//	{
//		i++;
//	}
//	return i;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//C语言类型
//1.内置类型：char short int long longlong double float
//2.自定义类型：1.构造类型 - 数组类型 结构体类型 枚举类型 联合类型  2.指针类型   3.空类型 - void
//类型的意义：1.使用这个类型开辟内存空间的大小(大小决定了使用范围) 2.如何看待内存空间的视角


//void* pv -无具体类型的指针


////设计程序检查机器存储模式是大端还是小端
//int CheckMode()
//{
//	int i = 1;
//	return (*(char*)&i);   //(char*)&i强制类型转换，将int类型的地址转换为char类型  *(char*)&i解引用
//}
//int main()
//{
//	int ret = CheckMode();
//
//	if (ret == 1)
//	{
//		printf("机器存储模式是小端模式");
//	}
//	else
//	{
//		printf("机器存储模式是大端模式");
//	}
//
//	return 0;
//}


//int main()
//{
//	char  a = -1;
//	signed char b = -1;
//	unsigned char c = -1; //-1的补码为11111111所以unsigned输出为255
//	printf("a = %d b = %d c = %d", a, b, c);
//
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	//1000000000000000000000001000000原码
//	//1111111111111111111111110111111反码
//	//1111111111111111111111111000000补码
//	printf("%u\n", a);//%u打印十进制的无符号数字
//
//
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;  //按照补码的形式进行运算，最后格式化为有符号整数
//	//1000000000000000000000000010100原码
//	//1111111111111111111111111101011反码
//	//1111111111111111111111111101100补码   -20
//	//0000000000000000000000000001010  
//	//1111111111111111111111111110110相加的补码
//	//1111111111111111111111111110101反码
//	//1000000000000000000000000001010原码
//	printf("%d\n", i + j);
//}


//int main()
//{
//	unsigned int i;
//	//i 为无符号数，当 i = 0时，i--变为2^32 陷入死循环
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	for (int i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;  //a里面的值从-1 … -128 127 … 2 1 0
//	}
//	printf("%d", strlen(a));//strlen找到\0停止 \0ASCII值为0
//
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}

////任意一个二进制浮点数V可以表示成下面形式：(-1)^S*M*2^E  (-1)^S表示符号位，s = 0表示正数，s=1表示负数。
////M表示有效数，大于等于1，小于2，2^E表示指数位
////32位浮点数，最高1位为符号位s，接着的8位是指数E，剩下的23位为有效数字M
////对于64位的浮点数，最高1位为符号位S，接着的11位是指数E，剩下的52位为有效数字M
////M只存了小数位，没有存整数1
////E是一个无符号数，存储E时，必须加一个中位数，对于8位的E，中位数是127,11位的E，中位数是1023
////指数E从内存中取出还可以再分为三种情况：
////E不全为0或不全为1：取出时，指数E的计算值减去127，得到真实值，再讲有效数字M前加上第一位的1  
////E全为0：浮点数的指数E等于1-127(或者1-1023)即为真实值，有效数字M不再加上第一位的1
////E全为1：这时如果有效数字M全为0，表示±无穷大(正负取决于符号位s)
//int main()
//{
//	int n = 9;
//	//9的补码：0000 0000 0000 0000 0000 0000 0000 1001
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);// 9
//	//9.0 二进制为 1001.0  = (-1)^0*1.001*2^3  s = 0 M = 1.001 E = 3
//	printf("pFLoat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//0100 0001 0001 0000 0000 0000 0000 0000
//	printf("num的值为：%d\n", n);//1091567616转为16进制为41100000 是9.0存储在内存中的二进制数
//	printf("pFLoat的值为：%f\n", *pFloat);//9.000000
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdefg";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	char* pc = "abcdefg";//"abcdefg"是一个常量字符串，将a的地址赋值给指针pc
//	printf("%s\n", pc);//从pc的地址开始打印字符串
//
//	return 0;
//}

//int main()
//{
//	//指针错误使用案例  常量字符串不能被修改
//	char* p = "abcdefg";
//	*p = 'W';
//	printf("%s\n", p);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)
//	//	printf("hehe\n");
//	//else
//	//	printf("haha\n");
//
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//int main()
//{
//	//4个地址均不相同
//	const char arr1[] = "abc";
//	const char arr2[] = "abc";
//	const char* p1 = "abc";
//	const char* p2 = "abc";
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr2);
//	printf("%p\n", &p1);
//	printf("%p\n", &p2);
//
//	return 0;
//}


////指针数组
//int main()
//{
//	int arr1[10] = { 0 };//整形数组
//	int* parr1[10];//存放整型指针的数组
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int* arr[4] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//		printf("%p\n", arr[i]);
//	}
//
//	return 0;
//}


////指针数组正确使用场景
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//	}
//	return 0;
//}

////数组指针是指针
//int main()
//{
//	int* p = NULL;//整型指针 - 指向整型的指针 - 可以存放整型的地址
//	char* pc = NULL;//字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的 地址
//	// int arr[10] = { 0 };
//	// arr - 首元素地址
//	// &arr[0] - 首元素地址
//	// &arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//每个元素为int 类型，所以当定义数组指针时，
//  //是int (*p)[] = &arr;因为&arr取地址，所以需要使用指针(*p)来保存地址，[10]表示指向的是一个数组，其内有10个元素，int表示元素类型
//	int(*p)[10] = &arr;//数组的地址存储起来
//	//上面的p就是数组指针
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];//表示
//	char* (*pa)[5] = &arr;
//	//char* arr[5]表示数组arr中有5个元素，每个元素是字符指针类型，当取地址&arr时，需要用指针(*pa)来存储数组arr的地址
//	//[5]表示pa指向的数组中有5个元素，char* 表示数组中的元素类型为字符指针类型
//	//实际上&arr表示的是数组的地址，而不是数组首元素的地址,数组地址+1，跳过整个数组的大小，所以&arr+1相对于&arr差值是40
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	printf("%p ", &arr);
//	printf("%p ", &arr+1);
//	printf("%p ", &arr[0]);
//	printf("%p ", &arr[0]+1);
//	printf("%p ", p);
//	printf("%p ", p + 1);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p + i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa == arr *(*pa+i)相当于对arr后的第i个地址解引用
//	//	//printf("%d ", (*pa)[i]);//(*pa)相当于拿到了数组名
//	//}
//	return 0;
//}


////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));//*(p+i)找到每一行数组的地址，*（*（p+i）+j）解引用找到（p+i）行地址的第j个元素
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//arr[3][5]可以看成一维数组，数组中有三个元素，每个元素是int[5]
//	//arr[3][5]的首地址是第一行数组的地址
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//		printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	}
//
//	return 0;
//}


//int arr[5];           //arr是一个5个元素的整型数组
//int* parr1[10];       //parr1是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
//int(*parr2)[10];      //parr2是一个指针，该指针指向了一个数组，数组10个元素，每个元素的类型是int - parr2是数组指针
//int(*parr3[10])[5];   //parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每
////个元素是int 


//void test(int arr[])//OK   数组大小可以省略
//void test(int arr[10]) // OK
//void test(int *arr)//OK
//void test2(int *arr[20])//OK
//void test2(int **arr)//OK  一级指针的地址放入二级指针中
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}


////二维数组传参，函数形参的设计只能省略第一个[]的数字
//void test(int arr[][5])
//{}
//void test(int arr[3][5])
//{}
//void test2(int arr[3][])  //err
//{}

//void test(int arr[][])  //err
//{}
//void test3(int *arr) //二维数组的数组名表示的地址是第一行的地址 err
//{}

//void test4(int **arr)  //二级指针只能存放一级指针变量的地址 err
//{
//
//}

//void test5(int (*arr)[5]) //OK 
//{
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));//指针解引用
//		printf("%d\n", p[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;//将数组首地址传递给指针p 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}



////二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	int* arr[10];
//	test(arr);//指针数组也可以
//
//	return 0;
//}


////数组指针 - 是指向数组的指针
////函数指针 - 是指向函数的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d", Add(a, b));
//	//&函数名 和 函数名都是函数的地址
//	//printf("%p ", &Add);//打印Add函数的地址
//	//printf("%p ", Add);
//	int(*pa)(int, int) = Add;//函数指针 - int表示返回值类型 (*pa)表示函数指针,存储函数的地址。(int,int)表示函数形参类型
//	printf("%d\n",(*pa)(2, 3)); //(*pa)(x,y) == Add(x,y)
//
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//
//	return 0;
//}

////void(*p)() 其中p表示变量名，void(*)()表示变量类型
//(*(void(*)())0)(); // void(*)() - 是一个函数指针的类型，它指向一个没有参数并返回void的函数，0是一个整型常量，
////在这里他被转换成为了上述类型的函数指针。因此这部分代表了一个指向地址0的函数指针。
//// *(void(*)())0 - *操作符表示解引用，意味着获得地址0处的函数
//// (*(void(*)())0)()最后的()表示对解引用后得到的函数进行调用
////总的来说上面代码是一次函数调用，调用0地址处的参数为无参，返回类型为void的那个函数
//
//void (*signal(int, void(*)(int)))(int);//void(*)(int) - 函数指针类型，无返类型为void，参数为int型   
////signal是一个函数声明，他接收两个参数，一个是int整型，另一个void(*)(int)是函数指针类型，该函数接收一个int类型的参数并返回void。
////最外层的void(*)(int)表示signal函数的返回类型，也是一个函数指针。
////函数指针作为返回类型必须将函数名和传入的参数放在函数指针内部 - ‘*’要靠近名字
//void (*            signal(int, void(*)(int))              )(int);
//typedef void(*pfun_t)(int);   //这里pfun_t是void(*)(int)的简化名上面的表达式就可以简化成->
//pfun_t signal(int, pfun_t);


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;//函数指针 - int表示返回值类型 (*pa)表示函数指针,存储函数的地址。(int,int)表示函数形参类型
//	printf("%d\n", (pa)(2, 3));//三种表达式都可以正常调用函数
//	printf("%d\n", (*pa)(2, 3)); //(*pa)(x,y) == Add(x,y)
//	printf("%d\n", pa(2, 3));
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	//指针数组
//	int* arr[5];
//
//	//数组存放4个函数的地址 - 函数指针的数组
//	int (*parr[4])(int, int) = {Add,Mul,Div,Sub};//函数指针的数组
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](5, 4));
//	}
//
//	return 0;
//}

////函数指针的用途 - 转移表

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组pfArr，存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*) = { my_strcpy,0,0,0 };



////计算器
//void menu(void)
//{
//	printf("********************************\n");
//	printf("*****    1.add    2.sub    *****\n");
//	printf("*****    3.mul    4.div    *****\n");
//	printf("*****        0.exti        *****\n");
//	printf("********************************\n");
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//
//void Calc(int (*pfun)(int ,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pfun(x, y));
//}
//
// 
////使用函数指针实现计算器功能
//int main()
//{
//	int choice = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &choice);
//		
//		switch (choice)
//		{
//		case 0:
//			printf("再见！");
//			break;
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("输入错误，请重新选择");
//			break;
//		}
//	} while (choice != 0);
//
//	return 0;
//}


////使用函数指针数组实现功能
//int main()
//{
//	int choice = 0;
//	int x = 0;
//	int y = 0;
//
//	int* (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &choice);
//		if (choice >= 1 && choice <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[choice](x, y);
//			printf("%d\n", ret);
//		}
//		else if(choice == 0)
//		{
//			printf("再见！\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//
//	} while (choice != 0);
//
//	return 0;
//}



////指向函数指针数组的指针：指向函数指针数组的指针是一个指针，指针指向一个数组，数组的元素都是函数指针
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	//函数指针pfun
//	void(*pfun)(const char* str) = test;
//
//	//函数指针的数组pfunArr
//	void (*pfunArr[3])(const char* str) = { test };
//
//	//指向函数指针数组的指针
//	void (*(*ptrTopfun)[3])(const char* str) = &pfunArr;//ptrTopfun是一个数组指针，指针指向的数组有3个元素
//	//指向的数组的每个元素的类型是一个函数指针 void(*)(const char*)
//
//	//调用第一个函数的用法
//	(*ptrTopfun)[0]("sfasfdfsdf");
//
//	return 0;
//}


//回调函数：通过函数指针调用的函数，如果把函数的指针作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，
//就是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的时间或条件发生时由另一方调用的，
//用于对该事件或条件进行响应 

//print(char* str)
//{
//	printf("heh:%s\n", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//指向数组指针的指针
//	int* (**ppa)[10] = &pa;
//
//	//函数指针
//	int (*pAdd)(int, int) = Add;//&Add也可以
//	//调用函数
//	int sum = (*pAdd)(1, 2);
//	//函数指针数组
//	int (*pArr[10])(int, int) = { pAdd };
//	//指向函数指针数组的指针
//	int(*(*ptrToArr)[10])(int, int) = &pArr;
//
//	return 0;
//}


////qsort - 可以排序任意类型的数据  ,使用者需要先实现一个比较函数
////传入4个参数，第一个：待排序数组的首元素地址 第二个：待排序数组的元素个数 第三个：待排序数组每个元素的大小 - 单位字节
//// 第四个参数：是函数指针，比较两个元素的所有函数的地址 - 这个函数使用者自己实现,函数指针的两个参数是带比较的两个元素的地址
////void* 类型的指针可以接受任意类型的地址，但是不能进行解引用操作，也不能进行对地址+-整数的操作
struct Stu
{
	char name[20];
	int age;
};

int int_cmp(const void* p1, const void* p2)//传进来任意类型指针的形参
{
	return (*(int*)p1 - *(int*)p2); //先将形参强制类型转换为int类型的指针，再解引用
}

int float_cmp(const void* p1, const void* p2)//传进来任意类型指针的形参
{
	//if (*(float*)p1 == *(float*)p2) //先将形参强制类型转换为int类型的指针，再解引用
	//	return 0;
	//else if (*(float*)p1 > *(float*)p2)
	//	return 1;
	//else
	//	return -1;
	return ((int)(*(float*)p1 - *(float*)p2));
}

int age_cmp(const void* p1, const void* p2)
{
	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
}

int name_cmp(const void* p1, const void* p2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用大于小于等于比较，应该用strcmp函数
	return strcmp(((struct Stu*)p1)->name , ((struct Stu*)p2)->name);
}

void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void Swap(char* buffer1, char* buffer2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buffer1;
		*buffer1 = *buffer2;
		*buffer2 = temp;
		buffer1++;
		buffer2++;
	}
}


void Bubble_sort2(void* base, int sz, int width, int (*cmp)(const void* p1,const void* p2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
		{
			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
			{
				Swap((char*)base + width * j, (char*)base + width * (j + 1), width);
			}
		}
	}
}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	Bubble_sort2(arr, sz, sizeof(arr[0]), int_cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int num = sizeof(f) / sizeof(f[0]);
//	//qsort(f, num, sizeof(f[0]), float_cmp);//最后一个参数是比较函数的指针，不需要再次声明函数类型，传入函数名即可
//	Bubble_sort2(f, num, sizeof(f[0]), float_cmp);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",40} };  // 结构体数组
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	//qsort(s, sz, sizeof(s[0]), age_cmp);
//	Bubble_sort2(s, sz, sizeof(s[0]), age_cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//		printf("\n");
//	}
//
//}
//
void test4()
{
	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",40} };  // 结构体数组
	int sz = sizeof(s) / sizeof(s[0]);

	//qsort(s, sz, sizeof(s[0]), name_cmp);
	Bubble_sort2(s, sz, sizeof(s[0]), name_cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
		//printf("%d ", s[i].age);
		printf("\n");
	}

}

int main()
{

	//test1();
	//test2();
	//Bubble_sort(arr, sz);
	//test3();
	test4();

	return 0;
}

//
//int main()
//{
////	int a[] = { 1,2,3,4 };
////	printf("%d\n", sizeof(a));  //16   - sizeof(数组名) - 计算的是数组总大小
////	printf("%d\n", sizeof(a+0));  //8  - a+0是指向数组第一个元素的指针，64位系统中指针占8个字节
////	printf("%d\n", sizeof(*a));  //4  - *a是数组的第一个元素，是一个整型
////	printf("%d\n", sizeof(a+1));  //8 - a+1是指向数组第一个元素的指针，64位系统中指针占8个字节
////	printf("%d\n", sizeof(a[1]));  //4 - a[1]是数组的第二个元素，是一个整型
////	printf("%d\n", sizeof(&a));  //8  - 是指向整个数组的指针
////	printf("%d\n", sizeof(*&a));  //16 - *&a实际上就是数组本身，包含4个整型
////	printf("%d\n", sizeof(&a+1));  //8 - 是指向数组后面位置的指针
////	printf("%d\n", sizeof(&a[0]));//8 - 是指向数组第一个元素的指针
////	printf("%d\n", sizeof(&a[0]+1));//8 - 是指向数组第二个元素的指针
//
//
//	char arr[] = { 'a','b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));		 // 6 数组大小6*1
//	//printf("%d\n", sizeof(arr+0));		 // 8 arr是首元素的地址
//	//printf("%d\n", sizeof(*arr));		 // 1 *arr是数组的第一个元素 是一个char
//	//printf("%d\n", sizeof(arr[1]));		 // 1
//	//printf("%d\n", sizeof(&arr));		 // 8
//	//printf("%d\n", sizeof(&arr+1));		 // 8
//	//printf("%d\n", sizeof(&arr[0]+1));   // 8
//
//	printf("%d\n", strlen(arr));		 // 随机值
//	printf("%d\n", strlen(arr+0));		 // 随机值
//	printf("%d\n", strlen(*arr));		 // strlen需要传入一个地址，*arr传入了数组首元素地址a，所以程序错误 
//	printf("%d\n", strlen(arr[1]));		 // 错误
//	printf("%d\n", strlen(&arr));		 // 随机值
//	printf("%d\n", strlen(&arr+1));		 // 随机值 - 6
//	printf("%d\n", strlen(&arr[0]+1));   // 随机值 - 1
//
//
//
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";  //abdcef\0
//	//printf("%d\n", sizeof(arr));       //7  
//	//printf("%d\n", sizeof(arr+0));     //8 
//	//printf("%d\n", sizeof(*arr));      //1
//	//printf("%d\n", sizeof(arr[1]));    //1
//	//printf("%d\n", sizeof(&arr));      //8
//	//printf("%d\n", sizeof(&arr+1));    //8
//	//printf("%d\n", sizeof(&arr[0]+1)); //8
//
//	//printf("%d\n", strlen(arr));       //6  
//	//printf("%d\n", strlen(arr+0));     //6 
//	//printf("%d\n", strlen(*arr));      //错误
//	//printf("%d\n", strlen(arr[1]));    //错误
//	//printf("%d\n", strlen(&arr));      //6  &arr - 数组的地址 - 数组指针char(*p)[7] = &arr;
//	//printf("%d\n", strlen(&arr+1));    //跳过了字符串，后面为随机值
//	//printf("%d\n", strlen(&arr[0]+1)); //5
//
//	//char* p = "abcdef";   //指针p放的是a的地址
//	//printf("%d\n", sizeof(p));        //8   指针p的大小 - 字符串存放地址，为8
//	//printf("%d\n", sizeof(p+1));      //8   p+1计算的是字符b的地址
//	//printf("%d\n", sizeof(*p));       //1   解引用为a，计算大小为1
//	//printf("%d\n", sizeof(p[0]));     //1   p[0] == *(p+0) = a
//	//printf("%d\n", sizeof(&p));       //8   指针p的地址
//	//printf("%d\n", sizeof(&p+1));     //8   指针p后面的地址
//	//printf("%d\n", sizeof(&p[0]+1));  //8   字符b的地址
//
//	//printf("%d\n", strlen(p));         //6
//	//printf("%d\n", strlen(p + 1));     //5
//	//printf("%d\n", strlen(*p));        //错误
//	//printf("%d\n", strlen(p[0]));      //错误
//	//printf("%d\n", strlen(&p));        //随机值
//	//printf("%d\n", strlen(&p + 1));    //随机值
//	//printf("%d\n", strlen(&p[0] + 1)); //5 和第二个表达式类似，从"bsdef"开始计算
//
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr));              //48   - 整个数组大小 12*4
//	printf("%d\n", sizeof(arr[0][0]));        //4    - 第一个元素大小
//	printf("%d\n", sizeof(arr[0]));           //16   - 第一行大小 arr[0]相当于第一行作为一维数组的数组名，
//	//sizeof(arr[0])把数组名单独放在sizeof内，计算的是一行的大小 4*4
//	printf("%d\n", sizeof(arr[0]+1));         //8    - arr[0]表示首元素地址，首元素地址+1为首行第二个元素地址
//	printf("%d\n", sizeof(*(arr[0] + 1)));    //4    - 第一行第二个元素
//	printf("%d\n", sizeof(arr+1));            //8    - arr是二维数组的数组名，没有sizeof(数组名)，也没有&数组名，
//	//所以arr是首元素地址，而二维数组的首元素是第一行，因此arr+1是第二行数组的地址
//	printf("%d\n", sizeof(*(arr+1)));         //16   - 第二行的4个元素大小
//	printf("%d\n", sizeof(&arr[0]+1));        //8    - 第二行的地址
//	printf("%d\n", sizeof(*(&arr[0] + 1)));   //16   - 第二行的4个元素
//	printf("%d\n", sizeof(*arr));             //16   - 第一行的4个元素
//	printf("%d\n", sizeof(arr[3]));           //16   - 第四行的4个元素大小，无论有没有第四行
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//数组指针类型强制转换为int指针类型
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//结果为2,5。a为数组首元素地址，a+1时为数组第二个元素的地址，解引用时为2，指针ptr指向(&a+1)的地址
//	//&a取出的是整个数组的地址，因此指针ptr中保存的地址为数组后面的那个地址，因此*(ptr-1)时为数组的最后一个元素5
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
////假设p的地址为0x100000.如下表达式的值分别是多少
////已知结构体Test类型的变了大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);  //p+1的地址为0x100014,p指向整个结构体的地址
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001  将p转换为无符号的long型，此时地址为1048576，加上1再转换为16进制就是0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004  将p强制转换为无符号整型指针，+1跳过一个整型指针的大小，为0x100004
//
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//此时ptr1指针指向了数组最后的地址
//	int* ptr2 = (int*)((int)a + 1);//数组首元素地址强制类型转换为int型，加1后地址往后偏移了一个字节
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] = *(ptr+(-1)),此时拿到了数组中的4，*ptr2此时为20000000
//
//
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//小括号实际上是在使用逗号运算符，返回第二个表达式的结果。实际上此时数组为
//	//{1,3,5}，则a[0][0] = 1 ,a[0][1] = 3, a[1][0] = 5，剩下的3个未定义
//	int* p;
//	p = a[0];//此时a[0] = 第一行元素1,3，所以p[0] = 1
//	printf("%d", p[0]);//0,1
//
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];   //数组指针有4个元素，每个元素指向一个数组的地址。因此p+1指向a[0][4]到a[1][3]的地址，
//	p = a;
//	printf("%p\n %d\n",( & p[4][2] - &a[4][2]), ( & p[4][2] - &a[4][2]));//p[4][2]等价于*(*(p+4)+2) = a[3][3]的地址
//	//此时& p[4][2] - &a[4][2]之间相差4个元素，因此%d为-4，打印地址时打印的是-4的补码因此为FFFFFFFC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//当&aa时，表示取整个数组的地址，此时ptr1指向数组后面的那个地址
//	int* ptr2 = (int*)(*(aa + 1));//aa+1表示指向第二行的首元素地址即aa[1]，此时ptr2用得到第二行首元素6地址
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };  //指针数组 - 存放3个指针指向三个字符串的首地址
//	char** pa = a;//char** pa = char* *pa,表示pa指针中存放着char*类型的地址即a的地址,pa中存放着指针数组的首地址
//	pa++;//pa+1,此时跳过了一个char*的变量，pa指向指针数组的第二个元素
//	printf("%s\n", *pa);//解引用为at
//
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//随机值  ER cpp此时存放的地址为c+1,再次经过++cpp指向c+1存放的地址，
//	//解引用后拿到c+1的地址，再--得到c的地址，此时指向ENTER的首字母地址，+3得到E的地址，打印得到ER
//	printf("%s\n", *cpp[-2] + 3);//FIRST ST  cpp[-2]等价于*(cpp - 2)，所以*cpp[-2] + 3 == **(cpp-2)+3
//	//因为cpp此时指向的是c+1，所以cpp-2使cpp指向c+3这个地址，两次解引用后指向FIRST这个字符串的首地址，+3指向S的地址，打印后为ST
//	printf("%s\n", cpp[-1][-1] + 1);//ENTER  EW  cpp[-1][-1] == *(*(cpp-1)-1)这里*（cpp-1）是cp[1]即c+2的地址，
//	//再次-1取得c+1的地址，解引用后指向NEW的首字母地址，+1后指向E这个字符
//
//	return 0;
//}

//求字符串长度 - strlen
//长度不受限制的字符串函数 - strcpy strcat strcmp
// 长度受限制的字符串函数 - strncpy strncat strncmp
// 字符串查找 - strstr strtok
// 错误信息报告 - strerror
// 内存操作函数 - memcpy memmove memset memcmp
//


////1.计数器的方法
////2.递归
////3.指针 - 指针
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen2(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//
//	return 1 + my_strlen2(str + 1);
//}
//
//int main()
//{
//	int len = my_strlen2("abcdef");
//	////// 错误示范
//	////char arr[] = { 'a','b','c','d','e','f' };
//	////int len = strlen(arr);
//	printf("%d\n", len);
//
//	//if (strlen("abc") - strlen("abcderd"))
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	return 0;
//}

//char* my_strcpy(char* str, const char* str2)
//{
//	assert(str != NULL);
//	assert(str2 != NULL);
//	char* ret = str;
//	//int len = strlen(str2);
//	//int i = 0;
//	//for (i = 0; i <= len; i++)
//	//{
//	//	str[i] = str2[i];
//	//}
//	//拷贝str2指向的字符串到str指向的空间，包含'\0'
//	while (*str++ = *str2++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//
//int main()
//{
//	//目标空间可修改
//	//char* str = "abcdefg";  //error
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	char* str = "agcdffda";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 != 0);
//	assert(str2 != 0);
//
//	int sz1 = strlen(str1);
//	int sz2 = strlen(str2);
//
//	char* ret = str1;
//	for (int i = 0; i < sz2; i++)
//	{
//		str1[sz1 + i] = str2[i];
//	}
//	str1[sz1 + sz2] = '\0';
//	return ret;
//}
//
//char* my_strcat2(char* str1, const char* str2)
//{
//	assert(str1 != 0);
//	assert(str2 != 0);
//
//	char* ret = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str1++ == *str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != 0);
//	assert(str2 != 0);
//
//	while ( *str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	int ret = (int)(*str1) - (int)(*str2);
//
//	if (ret > 0)
//		return 1;
//	else
//		return -1;
//
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//
//	if (my_strcmp(p1, p2) == 0)
//	{
//		printf("字符串1与字符串2相等");
//	}
//	else
//	{
//		printf("字符串1与字符串2不相等");
//	}
//
//	return 0;
//}



//char* my_strncpy(char* str, const char* str2,int num)
//{
//	assert(str != NULL);
//	assert(str2 != NULL);
//	char* ret = str;
//	//int len = strlen(str2);
//	//int i = 0;
//	//for (i = 0; i <= len; i++)
//	//{
//	//	str[i] = str2[i];
//	//}
//	//拷贝str2指向的字符串到str指向的空间，包含'\0'
//
//	while (num&&(*str++ = *str2++))
//	{
//		num--;
//	}	
//	if (num)
//	{
//		while (num)
//		{
//			*str++ = '\0';
//		}
//	}
//
//	//返回目的空间的起始地址
//	return ret;
//}
//
//
//int main()
//{
//	//目标空间可修改
//	//char* str = "abcdefg";  //error
//	char arr2[] = "abcdefghi";
//	char arr1[] = "bit";
//	char* str = "agcdffda";
//
//	my_strncpy(arr1, arr2,3);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (*str2 == '\0')
//		return (char*)str1;
//
//	const char* p1;
//	const char* p2;
//	const char* ret = str1;
//
//	while (*ret != '\0')
//	{
//		p1 = ret;
//		p2 = str2;
//		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return (char*)ret;
//		ret++;
//	}
//		
//	return NULL;
//}
//
//
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "435191950@qq.com";
//	char* p = ".@";
//	char buff[1024];
//	strcpy(buff, arr);
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



////strerror  char* strerror(int errnum);  //返回错误码，所对应的错误信息
//int main()
//{
//	//错误码 - 错误信息
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//....
//	//errno 是一个全局的错误码的变量，当c语言的库函数在执行过程中发生了错误，就会把对应的错误码赋值到errno中
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\.n");
//	}
//
//	return 0;
//}


//函数 - 如果参数符合条件就返回真
// iscntrl  任何控制字符
// isspace  空白字符：空格' '，换页'\f'，换行'\n'，回车'\r',制表符'\t'或者垂直制表符'\v'
// isdigit  十进制数字 0-9
// isxdigit 十六进制数字，包括所有十进制数组，小写字母a-f,大写字母A—F
// islower  小写字母a-z
// isupper  大写字母A-Z
// isalpha  字母a-z或A-Z
// isalnum  字母或者数字，a-z,A-Z,0-9
// ispunct  标点符号，任何不属于数字或者字幕的图形字符
// isgraph  任何图形字符
// isprint  任何可打印字符，包括图形字符和空白字符
//int tolower(int c)将大写字母转换为小写字母 
//int toupper(int c)将小写字母转换为大写字母

//int main()
//{
//	//char ch = '21';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d", ret);
//
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//
//	char arr[] = "I Am A Strudent";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

////memcpy memomove memcmp memset
////void* - 通用类型的指针，无类型指针
////void* memcpy(void* destination,const void* source,size_t num);单位是字节
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest =*(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//
//	if(dest<src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//			//++(char*)dest;
//			//++(char*)src;
//		}
//	}
//
//	return ret;
//}


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//
//	if (dest<src || dest>(char*)src + num)
//	{
//		//前->后
//	}
//	else
//	{
//		//后->前
//	}
//
//	return ret;
//}
//
//struct  S
//{
//	char name[20];
//	int age;
//};
//
//
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,0 };
////	int arr2[10] = { 0 };
////	struct S arr3[] = { {"张三",20},{"李四",39} };
////	struct S arr4[3] = { 0 };
////	memcpy(arr4, arr3, sizeof(arr3));
////	int sz = sizeof(arr);
////	memcpy(arr2, arr, sz);
////
////	return 0;
////}
//
////C语言标准
////memcpy只要处理不重叠的内存拷贝就可以了
////memmove处理重叠内存的拷贝
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ret = my_memmove(arr + 2, arr, 20);//将1-5拷贝到3-7的位置上
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d ", ret);
//	return 0;
//}

//int main()
//{
//	char arr[10] = "0";
//	memset(arr, '#', 10);
//
//	//int arr[10] = { 0 };
//	//memset(arr, 1, 10);//error 只改变前10个字节不是10个元素
//
//	return 0;
//}

////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量（对象）
////描述学生：属性->名字+电话+性别
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//};
//
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

////匿名结构体类型
//struct
//{
//	int a;
//	char c;
//}sa;
//
//int main()
//{
//
//	return 0;
//}


////数据结构：数据在内存中存储的结构
////链表：每个节点存放数据
////结构的自引用
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//存放下一个节点的地址 4个字节或者8个字节   指针域
//};


//
//typedef struct Node
//{
//	int data;//数据域
//	struct Node* next;//存放下一个节点的地址 4个字节或者8个字节   指针域
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello world" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello world" };
//	printf("%c %lf %d %d %f %s", s.c,s.st.weight,s.st.age, s.a, s.d, s.arr);
//	return 0;
//}




////结构体的对其规则
////1.第一个成员在与结构体变量偏移量为0的地址处
////2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处
////对齐数=编译器默认的一个对齐数与该成员大小的较小值
////3.结构体的总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍
////4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2; 
//	int a;
//};
//
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//	printf("%d  ", sizeof(s1));
//	printf("%d  ", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d ", sizeof(struct S4));
//	return 0;
//}

////修改默认对齐数 #pragma pack(8)   //设置默认对齐数为8
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//int main()
//{
//	struct S s;
//	printf("%d ", sizeof(s));
//	return 0;
//}
#include <stddef.h>

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof()
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////传值
//Print1(struct S tmp)
//{
//	printf("%d %c %lf", tmp.a, tmp.c, tmp.d);
//}
//
////传址
//Print2(const struct S* ps)
//{
//	printf("%d %c %lf", ps->a, ps->c, ps->d);
//}
// 
////首选Print2，函数传参的时候，参数是需要压栈的，会有时间和空间上的系统开销。如果传递一个结构体对象的时候，
////结构体过大，参数压栈的系统开销比较大，所以会导致性能下降。
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//
//	Print1(s);
//	Print1(&s);
//	return 0;
//}



//位段  - 二进制位
//位段的声明和结构体是类似的，有两个不同：
//1.位段的成员必须是：int / unsigned int 或 signed int  short char都可以，但是成员类型一般都是相同的
//2.位段的成员名后面有一个冒号和数字

//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d ", sizeof(s));
//
//	return 0;
//}

////位段的内存分配
////1.位段的空间上是按照需要以4个字节(int)或者1个字节(char)的方式来开辟
////2.位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
//
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


////枚举
////枚举类型
//enum Sex
//{
//	//枚举的可能取值
//	male,
//	female,
//	secret
//};
//
//int main()
//{
//	enum Sex s = male;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}


////联合- 联合体 - 共用体
////联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，特征是这些成员公用一块空间
////联合的特点：联合的成员是公用一块内存空间，这样一个联合变量的大小，至少是最大成员的大小(因为联合至少得有能力保存最大的那个成员)
//
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &u);
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//int Check_sys()
//{
//	union Un un;
//	un.i = 1;
//	return un.c;
//
//}
//
//int main()
//{
//	if (Check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//
//	return 0;
//}

////联合大小的计算
////联合的大小至少是最大成员的大小
////当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//
//union Un
//{
//	int i;
//	char arr[5];
//};
//
//int main()
//{
//	union Un un;
//	printf("%d\n", sizeof(un));
//
//	return 0;
//}
