#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;//��pulArray���׵�ַ��ֵ��ָ��pulPtr
//	*(pulPtr + 3) += 3;//pulPtr+3ָ��������Ԫ��9�ĵ�ַ�������� �õ�9 +=3 ��Ϊ12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//ָ�� - ָ��õ�ָ����ָ��֮���Ԫ�ظ���
//ָ����ԱȽϴ�С


////�ַ�������
//void Return_Char(char* str)
//{
//	int num = strlen(str);
//	int left = 0;
//	int right = num-1;
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//
//void reverse(char* str)
//{
//	//assert(str);
//	int num = strlen(str);
//	char* left = str;
//	char* right = str + num-1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char word[256] = { 0 };
//	//scanf("%255s", &word);
//	gets(word);//��ȡһ��
//	//Return_Char(word);
//	//printf("%s\n", word);
//	reverse(word);
//	printf("%s", word);
//
//	return 0;
//}

////������ͣ�Sn = a+aa+aaa+aaaa+aaaaa�ĺͣ�a��һ�����֣����磺2+22+222+2222+22222
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int b = 0;
//	for (i = 0; i < n; i++)
//	{
//		b = b * 10 + a;
//		sum += b;
//	}
//	printf("��Ϊ��%d", sum);
//
//	return 0;
//}


//��ӡ0-100000�ڵ�����ˮ�ɻ��������
//ˮ�ɻ�����ָһ��nλ������λ���ֵ�n�η�֮�͵��ڸ���
//int digitalLength(int num)
//{
//	int length = 0;
//	while (num)
//	{
//		length++;
//		num /= 10;
//	}
//	return length;
//}
//
//int* Water_Flower(int num)
//{
//	static int arr[256] = { 0 };
//	int j = 0;
//	int count = 0;
//
//	for (j = 1; j <= num; j++)
//	{
//		int sum = 0;
//		int temp = j;
//		int digitals = digitalLength(j);
//		while(temp!=0)
//		{
//			int digital = temp % 10;
//			sum += pow(digital,digitals);
//			temp /=  10;
//		}
//
//		if (sum == j)
//		{
//			arr[count++] = j;
//
//		}
//	}
//	arr[count] = -1;
//	return arr;
//}
//
//
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	int* array = Water_Flower(x);
//	while (array[i] != -1)
//	{
//		printf("%d\n", array[i]);
//		i++;
//	}
//	return 0;
//}



////�Ż��ķ���
//int digitalLength(int num)
//{
//	int length = 0;
//	while (num)
//	{
//		length++;
//		num /= 10;
//	}
//	return length;
//}
//
//int CheckWaterFlower(int num)
//{
//	int original = num;
//	int sum = 0;
//	int length = digitalLength(num);
//
//	while (num)
//	{
//		int digital = num % 10;
//		sum += pow(digital, length);
//		num /= 10;
//	}
//	return sum == original;
//}
//
//void PrintWaterFlower(int limit)
//{
//	for (int i = 0; i <= limit; i++)
//	{
//		if (CheckWaterFlower(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	PrintWaterFlower(num);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i <= num; i++)
//	{
//		//�ж��Ƿ���ˮ�ɻ���
//		//1������i��λ�� - nλ��
//		int length = 1;
//		int temp = i;
//		while (temp /= 10)
//		{
//			length++;
//		}
//		//2������i��ÿһλ��n�η�֮��
//		temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			sum += pow(temp % 10, length);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}


////��ӡ*�γ�����ͼ��
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" " );
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//}

//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a,*p = &a;
//	a.a = 99;
//	printf("%d", (*p).a);  //a.a  p->a����
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[20];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = {{9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//	fun(students + 1);//wang
//	return 0;
//}

////����ˮ���⣬����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ���ԺͶ�����ˮ
//int main()
//{
//	int total = 0;
//	int money = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty /2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//void Return_OE(int arr[], int num)
//{
//	int i = 0;
//	int left = 0;
//	int right = num - 1;
//	int temp[14];
//	for (i = 0; i < num; i++)
//	{
//		temp[i] = arr[i];
//	}
//	for(i=0;i<num;i++)
//	{
//		if (temp[i] % 2 != 0)
//		{
//			arr[left] = temp[i];
//			left++;
//		}
//		else
//		{
//			arr[right] = temp[i];
//			right--;
//		}
//	}
//}
//
//
////�Ż�����
//void reorderArray(int arr[], int num)
//{
//	int left = 0;
//	int right = num - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 != 0)
//		{
//			left++;
//			if (left >= right)
//				break;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//			if (left >= right)
//				break;
//		}
//
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12,23,13,14, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Return_OE(arr, sz);
//	reorderArray(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}


////ʵ��һ�����������������ַ�����k���ַ������磺ABCD����1���ַ��õ�BCDA ����2���õ�CDAB
//void LeftRoll(char* str,int n)
//{
//	int sz = strlen(str);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		char temp = str[0];
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		str[sz - 1] = temp;
//	}
//
//}
//
//
//int main()
//{
//	char arr[] = "ABCDEFG";
//
//	LeftRoll(arr, 2);
//	printf("%s\n", arr);
//
//	return 0;
//}



////�Ż���ת����
//void reverse(char* str, int start, int end)
//{
//	while (start < end)
//	{
//		char temp = str[start];
//		str[start] = str[end];
//		str[end] = temp;
//		start++;
//		end--;
//	}
//	
//}
//void LeftRoll2(char* str, int n)
//{
//	int sz = strlen(str);
//	//�Ż���ת����
//	n = n % sz;
//	if (sz == 0 || n == sz)
//		return;
//	
//	reverse(str, 0, n - 1);
//	reverse(str, n, sz - 1);
//	reverse(str, 0, sz - 1);
//
//}
//
//int main()
//{
//	char str[] = "ABCDEFGH";
//	LeftRoll2(str, 2);
//	printf("%s\n", str);
//
//	return 0;
//}


////����һ���ַ������ж��Ƿ�Ϊ����һ���ַ�����ת����ַ���
//
//void reverse(char* str, int start, int end)
//{
//	while (start < end)
//	{
//		char temp = str[start];
//		str[start] = str[end];
//		str[end] = temp;
//		start++;
//		end--;
//	}
//	
//}
//void LeftRoll2(char* str, int n)
//{
//	int sz = strlen(str);
//	//�Ż���ת����
//	n = n % sz;
//	if (sz == 0 || n == sz)
//		return;
//	
//	reverse(str, 0, n - 1);
//	reverse(str, n, sz - 1);
//	reverse(str, 0, sz - 1);
//
//}
//
//int Compare(char* str1, char* str2)
//{
//	int i = 0;
//	int sz1 = strlen(str1);
//	int sz2 = strlen(str2);
//	if (sz1 == sz2)
//	{
//		for (i = 0; i < sz1; i++)
//		{
//			LeftRoll2(str2, i);
//			if (strcmp(str1,str2)== 0)
//				return 1;
//		}
//		return 0;
//	}
//	else
//	{
//		return 0;
//	}
//}


//void LeftRoll2(char* str, int n, char* result)
//{
//	int sz = strlen(str);
//	strcpy(result, str);
//	//�Ż���ת����
//	n = n % sz;
//	if (sz == 0 || n >= sz||n<=0)
//		return;
//
//	reverse(result, 0, n - 1);
//	reverse(result, n, sz - 1);
//	reverse(result, 0, sz - 1);
//
//}
//
//int Compare(char* str1, char* str2)
//{
//	int i = 0;
//	int sz1 = strlen(str1);
//	int sz2 = strlen(str2);
//	if (sz1 != sz2 || sz1 == 0 || sz2 == 0)
//		return 0;
//
//	/*char* temp = (char*)malloc(sz2 + 1);
//	if (temp == NULL)
//		return 0;
//
//	for (int i = 0; i < sz1; i++)
//	{
//		LeftRoll2(str2, i, temp);
//		if (strcmp(str1, temp) == 0)
//		{
//			free(temp);
//			return 1;
//		}
//	}
//	free(temp);
//	return 0;*/
//	if (sz1 == sz2)
//	{
//		char* temp = (char*)malloc(sz2 + 1);
//		for (i = 0; i < sz1; i++)
//		{
//			LeftRoll2(str2, i,temp);
//			if (strcmp(str1, temp) == 0)
//			{
//				free(temp);
//				return 1;
//			}
//				
//		}
//		free(temp);
//		return 0;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int Compare2(char* str1, char* str2)
//{
//	int sz1 = strlen(str1);
//	int sz2 = strlen(str2);
//	if (sz1 == sz2)
//	{
//		//char* temp = (char*)malloc(sz + 1);
//		//strcpy(temp, str1);
//		//strcat(str1, temp);
//		strncat(str1, str1, sz1);//�Լ����Լ�׷�ӵ�ʱ����ʹ��strcat����,�����
//
//		//���Ӵ��ĺ���
//		if (strstr(str1, str2) != NULL)
//			return 1;
//		else
//			return 0;
//	}
//	else
//		return 0;
//
//
//}
//
//int main()
//{
//	char str[30] = "ABCDEFGH";
//	char str2[] = "CDEFGHAB";
//
//
//	/*LeftRoll2(str, 2);
//	printf("%s\n", str);*/
//	if (Compare(str, str2) == 1)
//	{
//		printf("�ַ���1���ַ���2�����õ���");
//	}
//	else
//	{
//		printf("�ַ���1�����ַ���2�����õ���");
//	}
//
//	return 0;
//}

//int CheckNum(int arr[3][6], int row,int col, int num)
//{
//	int i = 0;
//	i = (num - *arr[0]) / col;
//	if (i > (row-1) || i < 0)
//		return 0;
//	else
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			if (num == arr[i][j])
//				return 1;
//		}
//		return 0;
//	}
//}
//
//int CheckNum2(int arr[3][6], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while ( x <= row-1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("�±���%d %d\n", x,y);
//			return 1;
//		}
//	}
//	
//		return 0;
//}


//int CheckNum3(int arr[3][6], int* row, int* col, int k)
//{
//	int x = 0;
//	int y = *col - 1;
//	while ( x <= *row-1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	
//	return 0;
//	
//}
//
//
//int main()
//{
//	int row = 0;
//	int arr[3][6] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18 };
//	row = sizeof(arr) / sizeof(arr[0]);
//	int num = 12;
//	int x = 3;
//	int y = 6;
//
//	if (CheckNum3(arr, &x,&y,num) == 1)
//	{
//		printf("������λ�ھ�����\n");
//		printf("����Ϊ��%d %d", x, y);
//	}
//	else
//	{
//		printf("�����ֲ��ھ�����");
//	}
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char b;
//	short c;
//	short d;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d", sizeof(s));
//	return 0;
//}


//#pragma pack(4)
//int main()
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()



////һ��������ֻ�����������ǳ���һ�Σ������������ֶ��ǳ��������Σ���дһ�������ҳ�������ֻ����һ�ε�����
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
//	printf("ֻ���ֹ�һ�ε������ǣ�%d��%d\n", ret1, ret2);
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
//	//������������õ�ֻ���ֹ�һ�ε���������XOR���
//	int XorAll = 0;
//	for (i = 0; i < sz; i++)
//	{
//		XorAll ^= arr[i];
//	}
//
//	//�ҵ�����ֻ���ֹ�һ�����Ĳ�ͬλ
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
//		if ((arr[i] & mask) == 0)//ʹ���ҵ���λ���� mask ��ԭ�����Ϊ���顣�����λ�����Ӧλ��Ϊ 0 
//		//��������������һ�飬Ϊ 1 ��������һ�顣����ֻ������������Ψһ�ģ������������������λ�ϲ�ͬ��
//		//������������ֱض��ֱ���������ͬ�����С�
//		{
//			num1 ^= arr[i];//��ÿ���ڵ������ٴν��� XOR ���������ڳ���һ��Ψһ�������⣬�������ֶ��������Σ�
//			//����ÿ��ͨ�� XOR ������ʣ�µľ����Ǹ�Ψһ�����֡�
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("ֻ���ֹ�һ�ε�����Ϊ:%d %d", num1, num2);
//
//	return 0;
//}

////�������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	/*int min = (a > b) ? a : b;
//	while (1)
//	{
//		if (a % min == 0 & b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n", min);*/
//	int tmp = a%b;
//	while (tmp)
//	{
//		a = b;
//		b = tmp;
//
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int tmp = 0;
//	while (i < sz)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	i = 0;
//	while (i < sz)
//	{
//		if (arr[0] < arr[i])
//		{
//			tmp = arr[i];
//			arr[i] = arr[0];
//			arr[0] = arr[i];
//		}
//		i++;
//	}
//	printf("%d", arr[0]);
//	return 0;
//}

//�ݹ��ӡÿһλ��
//void Print(int num)
//{
//	if (num < 10)
//	{
//		printf("%d ", num);
//	}
//	else
//	{
//		Print(num / 10);
//		printf("%d ", num % 10);
//	}
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//	return 0;
//}


//�ݹ���������
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(strlen(str)>1)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}

//void reverse(char* str, int left,int right)
//{
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(int num)
//{
//	int ret = 0;
//	if (num > 9)
//		return DigitSum(num / 10) + num % 10;
//	else
//		return num;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	return 0;
//}

//double Pow(int n, int k)
//{
//	int ret = 1;
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//int main() {
//    char ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        
//        if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//        else if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);
//        }
//        getchar();
//    }
//
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d ", ret);
//	return 0;
//}

//int cnt = 0;
//
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) &&
//							((d == 3) + (c == 5) == 1) && ((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}


////�������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void reverse(char* str, int start, int end)
//{
//	char tmp;
//	while (start < end)
//	{
//		tmp = str[start];
//		str[start] = str[end];
//		str[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//void LeftRoll(char* str, int n)
//{
//	int sz = strlen(str);
//	n = n % sz;
//	if (n == sz || sz == 0)
//		return;
//	reverse(str, 0, n - 1);
//	reverse(str, n, sz - 1);
//	reverse(str, 0, sz - 1);
//
//}
//
//int main()
//{
//	char str[] = "ABCDEFG";
//	LeftRoll(str, 2);
//	printf("%s", str);
//
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//1.��ָ��
// 2.���ַ���
// 3.�ո�
// 4.+-
// 5.Խ��
// 6.�������ַ�
//

//enum Status
//{
//	VALID,
//	INVALID
//}sta = INVALID;  //Ĭ�ϷǷ�
//int my_atoi(const char* str)
//{
//	int flag = 1;
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	//�����հ��ַ�
//	while (isspace(*str))
//	{
//		str++;
//	}
//	// +-
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if(*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			//Խ��
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	if (*str == '\0')
//		sta = VALID;
//	return (int)ret;
//}
//
//
//int main()
//{
//	char arr[20] = "-1234567";
//	int ret = my_atoi(arr);
//	if (sta == INVALID)
//	{
//		printf("�Ƿ����أ�%d\n", ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("�Ϸ�ת����%d\n", ret);
//	}
//
//	return 0;
//}



int main()
{
	unsigned char i = 7;
	int j = 0;
	for (; i > 0; i -= 3)
	{
		++j;
	}
	printf("%d", j);

	return 0;
}
