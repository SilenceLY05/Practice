#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>


////%d--����
////%s--��ӡ�ַ���
////%c--��ӡ�ַ�
////%f--��ӡС��
////%p--�Ե�ַ����ʽ��ӡ
////%x--16���Ƶ���ʽ��ӡ
//
//int main()
//{
////	short age = 20;      //���ڴ�����2���ֽ�=16Bitλ���������20
//	//float weight = 94.5f; //���ڴ�����4���ֽڣ����С��
//
//		//���뺯�� scanf() 
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

//#define ����ı�ʶ������
//ö�ٳ���
//ö�ٹؼ��� - enum
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
//	//const - ������
//	int num = 8;
//	3;  //���泣��
//
//	const int n = 2;  //n�Ǳ������������г����ԣ���������˵n�ǳ�����
//
//	printf("%d",num2);
//
//	return 0;
//}





//�ַ�������˫������������һ���ַ���Ϊ�ַ�������ֵ�����߼���ַ�����
//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������ݡ�

//int main()
//{
//	//�����ڼ�����д洢��ʱ�򣬴洢���Ƕ�����
//	//'\0' - 0
//	//'a' - 97
//	char arr[] = "abd";  //���ַ�����������
//	char arr2[] = { 'a','b','c','\0' };
//	int num = sizeof(arr);
//	int num1 = sizeof(arr[0]);
//	printf("%s\n",arr);
//	printf("%s\n",arr2);
//	printf("%d\n",num);
//	printf("%d\n", num1);
//	return 0;
//}

// \? -  ����д���������ʺ�ʱʹ�ã���ֹ���Ǳ�������������ĸ
// \' - ���ڱ�ʾ�ַ�����
// \" - ���ڱ�ʾһ���ַ����ڲ���˫����
// \\ - ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
// \a - �����ַ�������
// \b - �˸��
// \f - ��ֽ��
// \n - ����
// \r - �س�
// \t - ˮƽ�Ʊ�� 
// \v - ��ֱ�Ʊ��
// \ddd - ddd��ʾ1~3���˽��Ƶ����顣�磺\130 X
// \xdd - dd��ʾ2��ʮ���������֡��磺\x30 0

// EOF  - end  of file  - �ļ�������־  ֵΪ-1

//int main()
//{
//	printf("%zu\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\132');
//	// \32 -- 32��2��8��������
//	// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	// 32--> 10��ֹ 26 --> ��ΪASCII��ֵ������ַ�
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

//2����λ����
//& ��λ��
//| ��λ��
//^ ��λ���  ��Ӧ�Ķ�����λ��ͬ��Ϊ0
//~ ��λȡ��

//int main()
//{
//	int a = 0;
//	int b = ~a;   // b�з��ŵ�����  ���λ�Ƿ���λ Ϊ1��ʾ������Ϊ0��ʾ����
//	printf("%d", b);  //��ӡ�����������ԭ��
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//00000000000000000000000000000000    a
//	//11111111111111111111111111111111    ��λȡ��-b �洢��Ϊ����
//	//11111111111111111111111111111110    ���� - �����1
//	//10000000000000000000000000000001    ԭ�� Ϊ-1  �����������λ������λ��λȡ����
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
//	register int a = 10; //�����a����ɼĴ�������
//	int c = 10;
//	c = -2;   //int ����ı������з��ŵ�  ��signedʡ�Ե���
//	unsigned int b = -10;//��ʹb��ֵΪ-10 �����ڶ���Ϊunsigned������bʵ�ʸ�ֵΪ10
//	//��C��C++�������У������������һ������Ϊ�޷��ţ�unsigned�����ͣ�Ȼ���Ը�����һ����ֵ��
//	//ʵ������δ������Ϊ������ʵ�ʵ�ʵ���У�ͨ���ᷢ�����ǣ���������ᱻת��Ϊ�޷������ͣ�
//	//���ת����ͨ�������ֵ��1ȡģ����ɵģ���Ҳ����ģ�����ƣ�modular wrap-around����
//	//���磬������ϵͳ��unsigned int��32λ�ģ������Ա�ʾ����ֵ��Χ�Ǵ�0��2^32-1Ҳ����0��4294,967,295��
//	//���㳢�Խ� - 10��ֵ������һ���޷�������ʱ���ᷢ�����ƣ�ʵ�ʴ洢��ֵ�����ǣ�2^32-10 = 4294967286
//	//����㿴������-10�����������Ϊ��ʹ�õĴ�ӡ�����ǰ����з����������������ֵ�ġ�������C�����У�
//	//�����ʹ��printf�������Ҵ����ʹ����%d��ʽ���ַ���������Ϊ�з���������Ƶģ���������%u
//	//������Ϊ�޷���������Ƶģ�����ô��ʹ�������޷��ŵģ����Ҳ���ܻ�������ʾΪһ������
//	//typedef  �����ض���
//	printf("%u", b);
//	return 0;
//}

//void test()
//{
//	//static ���ξֲ�����  
//	//�ֲ����������������ӳ��ˣ����������򲻻ᱻ����
//
//	//static ����ȫ�ֱ���
//	//�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û�취��ʹ��
//	
//	//static ���κ���
//	//�ı��˺������������ԣ���ͨ���������ⲿ�������ԣ�static���κ��Ϊ�ڲ��������� 
//	//extern - �����ⲿ����
//	static int a = 1;   //a��һ����̬�ľֲ�����
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
////��һ�ֱ�����������ŵ�ַ�� - ָ�����
//int main()
//{
//	int a = 10;  //4���ֽ�
//	int* p = &a;  //ȡ��ַ
//	printf("%p", &a);  
//	printf("%p", p);   
//	*p = 20;  //* - �����ò�����  ��p�洢�ĵ�ַ�ڵ����ݸ�Ϊ20 ����a���¸�ֵΪ20
//	return 0;
//}



////�ṹ�� - �������Ӷ��� �Լ��������������
//struct Book
//{
//	char Name[20];//C���Գ�������
//	short Price;  //�۸�
//
//};
//
//int main()
//{
//	//���ýṹ������ - ����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	printf("������%s\n", b1.Name);
//	printf("�۸�%d\n", b1.Price);
//	printf("������%s\n", pb->Name);
//	printf("�۸�%d\n", pb->Price);
//	printf("������%s\n", (*pb).Name);
//	printf("�۸�%d\n", (*pb).Price);
//	// . �ṹ�����.��Ա
//	//-> �ṹ�����->��Ա
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
//	; //����� - �����
//
//	return 0;
//}
//
////����else 
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
//	if (num = 5)   //����ط���num = 5�Ǹ�ֵ
//	{
//		printf("�Ǻ�\n");  
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
//			printf("����%dΪ����\n", i);
//		}
//
//
//	}
//
//	return 0;
//}

//void Week(int num)
//{
//	switch ( num)  //switch(���α��ʽ)
//	{
//	case 1:      //case: ���γ������ʽ
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
//			continue; //continue������ֹ����ѭ����Ҳ���Ǳ���ѭ����continue����Ĵ��벻����ִ�У�
//		              //����ֱ����ת��whilie�����жϲ��֣�������һ��ѭ��������ж�
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
//	printf("���������룺");
//	scanf("%s", password);
//	//��������ʣ��һ��'\n'����ȡһ��'\n'
//	getchar();
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("��ȷ�ϣ�");
//	}
//	else
//	{
//		printf("ȡ��ȷ�ϣ�");
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
//	//forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԣ�����forѭ�����жϲ������ûʡ�ԣ����ж��������Ǻ�Ϊ��
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
////�׳˺���
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


//���Һ���
//int binsearch(int x, int v[])
//{
//	int i = 0;
// //sizeof Ӧ����һ������ʱ����������������ռ�õ��ֽ��������ǽ������ڵ�ǰ�������ж��������
//	int num = sizeof(v) / sizeof(v[0]);
//	for (i = 0; i < num; i++)
//	{
//		if (v[i] == x)
//		{
//			printf("��ֵx�������еĵ�%d��Ԫ��", i);
//		}
//		
//	}
//	if (i == num)
//	{
//		printf("δ�ҵ�");
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
//		printf("��ʱi = %d\n", i);
//		printf("��ʱarr[i] = %d\n", arr[i]);
//		if (arr[i] == k)
//		{
//			printf("��ֵx�������еĵ�%d��Ԫ��\n", i);
//			break;
//		}
//
//	}
//	if (i == num)
//	{
//		printf("δ�ҵ�");
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
//			printf("�ҵ��ˣ��±�Ϊ%d����%d��ѭ���ҵ���", mid, i);
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
//		printf("δ�ҵ�����%dѭ�������\n", i);
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
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
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
//		printf("δ�ҵ�����%dѭ�������\n", i);
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
//	//	printf("û��Ҫ��ʾ������");
//	//	return;
//	//}
//	//	
//
//	////ʹ��'#'��ʼ��arr1
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
//	//��ӡģʽ
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
//	printf("�����ַ���: ");
//	if (fgets(line, sizeof(line), stdin) == NULL)
//	{
//		printf("��ȡ�������\n");
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
//	printf("�������˺ţ�>");
//	scanf("%s", arr1);
//	getchar();
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//
//		scanf("%s", password);
//		if (strcmp(password , "123QWE") == 0) //�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp
//		{
//			printf("������ȷ����½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//			
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("������������������µ�¼\n");
//	}
//
//	return 0;
//}

//���Ӵ�С˳���ӡ����� a b c
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

//��ӡ1-100��3�ı���
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

//�����Լ��
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
//	printf("���Լ��Ϊ��%d", temp);
//	return 0;
//}


////շת����������Լ��  ����Ч
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


////�ж�����
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("��%dΪ����\n", i);
//		}
//	}
//
//	return 0;
//}

////��ӡ����  ��Ч����
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
//			printf("����%dΪ����\n", i);
//	}
//
//	return 0;
//}
//
////��ӡ���� ��ٷ�  �Գ���
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
//			printf("����%dΪ����\n", i);
//	}
//
//	return 0;
//}

////��1-100�����������г���9�ĸ���
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
//	printf("�ܹ�������%d��9", num);
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
//	printf("�����Ϊ%lf", num);
//
//
//	return 0;
//}

//
////��10�������е����ֵ
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
//	printf("�����е������Ϊ��%d", max);
//
//	return 0;
//}



////�˷��ھ����ӡ
//int main()
//{
//	int i,j = 0;
//
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d �� %d = %2d  ", i, j, j * i);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


////���ֲ��ң�����������Ҿ�������
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
//			printf("�ҵ��ˣ��±�Ϊ��%d",mid);
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
//		printf("δ�ҵ�");
//	return 0;
//}



////��������Ϸ
////1.�������������
////2.�����֣��´��С������ʾ��
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
//	int rand_number = rand() % 100 + 1;  //���ɵ������
//	int left = 1;
//	int right = 100;
//	int guss = 0;
//	printf("��һ��1��100֮�������\n");
//
//	while (1)
//	{
//		printf("��������µ����֣���Χ%d - %d��:", left, right);
//		scanf("%d", &guss);
//
//		if (rand_number == guss)
//		{
//			printf("��ϲ�㣬�¶���!\n");
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
//			printf("��µñ�ʵ�ʵ���С\n");
//			left = guss+1;
//
//		}
//		else
//		{
//			printf("��µı�ʵ�ʵ�����\n");
//			right = guss-1;
//		}
//		if (left > right)
//		{
//			printf("û�пɲµ������ˣ���Ϸ����\n");
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
//	//��ʱ����������������������ʼ��
//	srand((unsigned int)time(NULL));
//
//	int choice;    //�������ѡ��
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &choice);
//
//		while (getchar() != '\n');   //������뻺����
//
//
//		switch (choice)
//		{
//		case 0:
//			printf("�ټ�");
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
//	return 0;
//}




////goto���
////�ػ�   cmd - ������
////shutdown -s -t 60   system() - ִ��ϵͳ����
//
//int main()
//{
//	system("shutdown -s -t 60");
//	again:
//	printf("��һ����֮�����������������������ر�\n�����룺");
//	char str[20] = { 0 };
//
//	scanf("%s", &str);
//
//	if (strcmp(str, "������") == 0)//�Ƚ������ַ���
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

////�ȽϽϴ�ֵ
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


////�����������ͱ���������
// ��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�
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


//�����ĵ��ã�1����ֵ���� �������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//2����ַ���� �Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ�������ú����ͺ�������ı�������������ϵ



////�ж��ǲ��������ĺ���
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
//	printf("����һ�������ж��Ƿ���������");
//	if (scanf("%d", &num))
//	{
//		i = Prime_num(num);
//		if (i == 1)
//		{
//			printf("����%dΪ����", num);
//		}
//		else
//		{
//			printf("����%d��������", num);
//		}
//	}
//	else
//	{
//		printf("�������\n");
//	}
//
//	return 0;
//}



////�ж��ǲ�������
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
//	printf("������������ж��Ƿ������꣺");
//	scanf("%d", &i);
//	j=Leap_Year(i);
//
//	if (j == 1)
//	{
//		printf("���%d������", i);
//	}
//	else
//	{
//		printf("���%d��������", i);
//	}
//
//	return 0;
//}

////ʵ��������������Ķ��ֲ���
//void Binary_Search(int search, int arr[], int num)
//{
//	int i = 0;
//	int flag = 0;   //0δ���� 1���� 2����
//	int left = 0;
//	int right = num - 1;
//	int mid;
//
//	for (i = 0; i < num; i++)
//	{
//		if (arr[i-1] > arr[i])
//		{
//			printf("����arrΪ��������\n");
//			flag = 1;
//			break;
//		}
//		else if (arr[i-1] < arr[i])
//		{
//			printf("����arrΪ��������\n");
//			flag = 2;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("����arr�����������飬����������");
//		return;
//	}
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//
//		if (search == arr[mid])
//		{
//			printf("�ҵ��ˣ�%d�������е����Ϊ%d", search, mid);
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
//	printf("%d���������е�Ԫ��",search);
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

////дһ��������ÿ�ε���Numֵ��1
//void Count_Num(void)
//{
//	static int i = 0;
//
//	i++;
//	printf("�ܹ�����%d�κ���\n", i);
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



////������Ƕ�׵��ú���ʽ����
//void new_line(void)
//{
//	printf("�Ǻ�\n");
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
//	//��ӡ1 < -- ��ӡ2  < -- ��ӡ43����ֵΪ��ӡ���ַ�����2        
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


////�����ݹ飺��������ı�̼��ɡ���Ҫ������1���������������������ֹͣ�ݹ顣2��ÿ�εݹ��Խ��Խ�ӽ���������
////����һ���޷�������ֵ����ӡÿһλ
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
//	printf("����һ���޷���������ֵ��");
//	scanf("%u", &j);
//
//	printf("���������Ϊ��");
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

//���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
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

////��N�Ľ׳�
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

////Ч�ʽϵ� 
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
////�������������ڴ�ӡ
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

////��ŵ������
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

////�ݹ鷨
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
////������
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
//	printf("����������̨�ף�");
//	scanf("%d", &i);
//	int num = Frog_Jump(i);
//	printf("����%d������", num);
//}


////�����ʼ��
//int main()
//{
//	int arr[10] = { 1,2,3 }; //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	return 0;
//}


////1.strlen �� sizeofû��ʲô����
////2.strlen �����ַ������ȵ� - ֻ������ַ����󳤶� - �⺯�� - ʹ����Ҫ����ͷ�ļ�
////3.sizeof ������������顢���͵Ĵ�С - ��λ���ֽ� ��һ�ֲ�����
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));  //���ֵ ������û��'\0'����������ֵ
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

////ð������
////arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�ص�ַ &arr[0]
//void Bubble_sort(int arr[], int num)
//{
//	int i, j, temp = 0;
//
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1; //����Ҫ����������Ѿ�����
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

////��������������Ԫ�صĵ�ַ(����������)
////1.sizeof�ڲ������������� -- ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
////2.&���������������������������ַ
//int main()
//{
//	int arr[] = { 0,10,10,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);// &arrȡ����������ĵ�ַ
//	printf("%p\n", &arr+1);
//	return 0;
//}


////������������Ч��д��
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


////������λ���������Ҫ�ƶ���λ��������Ǳ�׼δ����
//int main()
//{
//	int a = -1;
//	//>>--���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	/*���Ʋ�������
//	  1.�������ƣ��ұ߶�����߲�ԭ����λ��ͨ��Ϊ��������
//	  2.�߼����ƣ��ұ߶�������߲�0*/
//
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//
//	int b = a >> 1;
//	int c = a << 1;
//
//	//���Ʋ���������߶������ұ߲�0
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


////& - ��λ��
////^ - ��λ��򣬶�Ӧ�Ķ�������ͬΪ0����ͬΪ1
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



////����������������ʹ�õ���������
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	////�Ӽ��� - ���ܻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d", a, b);
//
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//
//	return 0;
//}


////������Ϊ����ʱ����������ʾ�������������Ϊ�����������
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
//	//���ж�a aΪ0 �������b,d��û�м��� ����a������1������ a = 1,b=2,c=3,d=4; �߼��������������Ϊ�٣��ұ�������ʲô��������
// 
//	//i = a++ && ++b && d++;
//	//�߼������㣬���Ϊ�棬�ұ�������ʲô�������㣬������Ϊ�٣������ұ� 
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
//	char a = 0xb6;//10110110  ��һλΪ����λ
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6) //��������ʱ����һλ����λΪ1����ȫΪ32λǰ��ȫΪ1�������
//		printf("a");
//	if (b == 0xb600)//b �� aͬ��
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));  //1 - char����ռһ���ֽ�
//	printf("%u\n", sizeof(+c)); //4 - �������㣬����������������Ϊ4���ֽ�
//	printf("%u\n", sizeof(!c)); //1 - 
//
//	return 0;
//}



////����ת�� - ĳ���������ĸ������������Ͳ�ͬ����������һ����������ת��Ϊ��һ�������������ͣ������޷����С�
//int main()
//{
//	float f = 3.14;
//	int num = f;//��ʽת�������о��ȶ�ʧ
//
//	return 0;
//}

//���Ʊ��ʽ����ֵ��������Ӱ������أ�1�������������ȼ���2���������Ľ���ԡ�3���Ƿ������ֵ˳��



////ָ�� - �Ǳ�����ԵĶ������õ�ַ������ֱֵ��ָ����ڵ����е���һ���ط���ֵ����ַָ��ñ�����Ԫ������ַ��Ϊָ��
////ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
////int* p    *p�ܹ�����4���ֽ�
////char* p   *p�ܹ�����1���ֽ�
////double* p *p�ܹ�����8���ֽ�
//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	int* pb = &a;
//	*pc = 0;//��ʱa = 0x11223300
//	*pb = 0;//��ʱa = 0x00000000
//
//	return 0;
//}

////ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
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



////Ұָ�룺ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ�
////����1.ָ��δ��ʼ�� 2.ָ��Խ����� 3.ָ��ָ��Ŀռ��ͷ�
//int main()
//{
//	////δ��ʼ��
//	//int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	//*p = 20;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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
//	//��ָ��Ϊ��ʱ�����ܷ��ʡ�
//	pa = NULL;//NULL ������ʼ��ָ��,��ָ�븳ֵ
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




//ָ������
////ָ��+-����
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
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ
//	char arr[] = "bitssss";
//	
//	int len = my_str(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//ָ��Ĺ�ϵ����
//��׼�涨������ָ������Ԫ�ص�ָ���ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�

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
//	////������д��ʽ������
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
//	printf("%p\n", arr); //��ַ - ��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//������һ��Ϊ��Ԫ�ص�ַ��������������
//	//1.&arr - &������ - ������������Ԫ�ص�ַ����������ʾ��������
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ������������
//
//	return 0;
//}


////����ָ��
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}


////ָ������ - ���� - ���ָ�������
////����ָ�� - ָ��
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


//int i;  //ȫ�ֱ�������ʼ��Ĭ��Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i)) //sizeof() - �������/������ռ�ڴ�Ĵ�С >= 0 �޷����� 
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

////�������������в�ͬλ�ĸ���
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
////�Ż�����
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

////��Ч����
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
////ͳ�ƶ���������1�ĸ���
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
////��Ч�������������1�ĸ���
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


////�������ʱ��������������
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
////ʹ�õݹ�ķ���ʵ���ַ�����ת
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

////���͸�λ���
//int DigitalSum(unsigned int n)
//{
//	if (n == 0)
//		return 0;
//	else
//		return n % 10 + DigitalSum(n / 10);
//}


////�ݹ�ʵ��n��k�η�
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



//�ṹ�壺�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

////struct �ṹ��ؼ��� Stu�ṹ���ǩ  struct stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;  //s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu������
//
//
//int main()
//{
//	//struct Stu S;//�ֲ��ṹ�����
//	Stu s1 = { "����",20,"12341342324","��" };
//	struct Stu s2 = { "����",20,"12341342324","Ů" };
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
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu������
//
//
//void Print1(Stu tmp)  //���ݵ��β�Ϊ�ṹ�������ʹ�ýṹ��Աʱʹ��.����
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* tmp) //���ݵ��β�Ϊ�ṹ���ַ��ʹ�ýṹ��Աʱʹ��->����  ���ַ�ʽ�Ϻ�
//{
//	printf("name:%s\n", tmp->name);
//	printf("age:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//
//int main()
//{
//	Stu s = { "����",20,"12312313123","��" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//���ݽṹ
//�������ݽṹ - ˳��� ���� ջ ����
//�������ݽṹ - ������ 

////����ʱ����ѹջ����  ջ���Ƚ����������ȳ�  ����һ��Ԫ�ؽ�ѹջ��ɾ��һ��Ԫ�ؽг�ջ
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

//Debug - Debug�汾�Ŀ�ִ�г��� ���Ե��Եģ���Ϊ�ļ��а����˵�����Ϣ�����Ҳ����κ��Ż�
//Release - Release�汾�Ŀ�ִ�г��� ���������˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��
////Debug�汾�������ѭ�� Release�汾������ִ��
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

////F9�л��ϵ�
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
////��1��+2��+����+n��
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
////�ݹ鷨
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

////��ѭ����ԭ�򣺵�i>9��ʱ��arr[10]�����Խ��Ƿ����ʣ�������arr[12]ʱ��arr[12]��i�ĵ�ַΪͬһ����
////��ʱ�ı�arr[12]��ֵ���൱�ڸı���i��ֵ��ʹi��ֵ��Ϊ0������ѭ��
//
////1.ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ���ʹ�õ͵�ַ���Ŀռ�
////2.���������±��������ַ���ɵ͵��߱仯��
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

////��ʵ���ַ�����������
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
////�Ľ�����
//char* my_strcpy2(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);//����
//	assert(arr2 != NULL);
//	if (arr2 == NULL || arr1 == NULL)
//		return NULL;
//	char* ptr = arr1;
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//		//*arr1++ = *arr2++;����������ʽ�ӵ�Ч
//	}
//	*arr1 = '\0';
//	//Ҳ����ʵ������while����Ч��
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
//	//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����Ҳ����p���ܱ��ı���
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


//C��������
//1.�������ͣ�char short int long longlong double float
//2.�Զ������ͣ�1.�������� - �������� �ṹ������ ö������ ��������  2.ָ������   3.������ - void
//���͵����壺1.ʹ��������Ϳ����ڴ�ռ�Ĵ�С(��С������ʹ�÷�Χ) 2.��ο����ڴ�ռ���ӽ�


//void* pv -�޾������͵�ָ��


////��Ƴ���������洢ģʽ�Ǵ�˻���С��
//int CheckMode()
//{
//	int i = 1;
//	return (*(char*)&i);   //(char*)&iǿ������ת������int���͵ĵ�ַת��Ϊchar����  *(char*)&i������
//}
//int main()
//{
//	int ret = CheckMode();
//
//	if (ret == 1)
//	{
//		printf("�����洢ģʽ��С��ģʽ");
//	}
//	else
//	{
//		printf("�����洢ģʽ�Ǵ��ģʽ");
//	}
//
//	return 0;
//}


//int main()
//{
//	char  a = -1;
//	signed char b = -1;
//	unsigned char c = -1; //-1�Ĳ���Ϊ11111111����unsigned���Ϊ255
//	printf("a = %d b = %d c = %d", a, b, c);
//
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	//1000000000000000000000001000000ԭ��
//	//1111111111111111111111110111111����
//	//1111111111111111111111111000000����
//	printf("%u\n", a);//%u��ӡʮ���Ƶ��޷�������
//
//
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;  //���ղ������ʽ�������㣬����ʽ��Ϊ�з�������
//	//1000000000000000000000000010100ԭ��
//	//1111111111111111111111111101011����
//	//1111111111111111111111111101100����   -20
//	//0000000000000000000000000001010  
//	//1111111111111111111111111110110��ӵĲ���
//	//1111111111111111111111111110101����
//	//1000000000000000000000000001010ԭ��
//	printf("%d\n", i + j);
//}


//int main()
//{
//	unsigned int i;
//	//i Ϊ�޷��������� i = 0ʱ��i--��Ϊ2^32 ������ѭ��
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
//		a[i] = -1 - i;  //a�����ֵ��-1 �� -128 127 �� 2 1 0
//	}
//	printf("%d", strlen(a));//strlen�ҵ�\0ֹͣ \0ASCIIֵΪ0
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

////����һ�������Ƹ�����V���Ա�ʾ��������ʽ��(-1)^S*M*2^E  (-1)^S��ʾ����λ��s = 0��ʾ������s=1��ʾ������
////M��ʾ��Ч�������ڵ���1��С��2��2^E��ʾָ��λ
////32λ�����������1λΪ����λs�����ŵ�8λ��ָ��E��ʣ�µ�23λΪ��Ч����M
////����64λ�ĸ����������1λΪ����λS�����ŵ�11λ��ָ��E��ʣ�µ�52λΪ��Ч����M
////Mֻ����С��λ��û�д�����1
////E��һ���޷��������洢Eʱ�������һ����λ��������8λ��E����λ����127,11λ��E����λ����1023
////ָ��E���ڴ���ȡ���������ٷ�Ϊ���������
////E��ȫΪ0��ȫΪ1��ȡ��ʱ��ָ��E�ļ���ֵ��ȥ127���õ���ʵֵ���ٽ���Ч����Mǰ���ϵ�һλ��1  
////EȫΪ0����������ָ��E����1-127(����1-1023)��Ϊ��ʵֵ����Ч����M���ټ��ϵ�һλ��1
////EȫΪ1����ʱ�����Ч����MȫΪ0����ʾ�������(����ȡ���ڷ���λs)
//int main()
//{
//	int n = 9;
//	//9�Ĳ��룺0000 0000 0000 0000 0000 0000 0000 1001
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);// 9
//	//9.0 ������Ϊ 1001.0  = (-1)^0*1.001*2^3  s = 0 M = 1.001 E = 3
//	printf("pFLoat��ֵΪ��%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//0100 0001 0001 0000 0000 0000 0000 0000
//	printf("num��ֵΪ��%d\n", n);//1091567616תΪ16����Ϊ41100000 ��9.0�洢���ڴ��еĶ�������
//	printf("pFLoat��ֵΪ��%f\n", *pFloat);//9.000000
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
//	char* pc = "abcdefg";//"abcdefg"��һ�������ַ�������a�ĵ�ַ��ֵ��ָ��pc
//	printf("%s\n", pc);//��pc�ĵ�ַ��ʼ��ӡ�ַ���
//
//	return 0;
//}

//int main()
//{
//	//ָ�����ʹ�ð���  �����ַ������ܱ��޸�
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
//	//4����ַ������ͬ
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


////ָ������
//int main()
//{
//	int arr1[10] = { 0 };//��������
//	int* parr1[10];//�������ָ�������
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


////ָ��������ȷʹ�ó���
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

////����ָ����ָ��
//int main()
//{
//	int* p = NULL;//����ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char* pc = NULL;//�ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������� ��ַ
//	// int arr[10] = { 0 };
//	// arr - ��Ԫ�ص�ַ
//	// &arr[0] - ��Ԫ�ص�ַ
//	// &arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//ÿ��Ԫ��Ϊint ���ͣ����Ե���������ָ��ʱ��
//  //��int (*p)[] = &arr;��Ϊ&arrȡ��ַ��������Ҫʹ��ָ��(*p)�������ַ��[10]��ʾָ�����һ�����飬������10��Ԫ�أ�int��ʾԪ������
//	int(*p)[10] = &arr;//����ĵ�ַ�洢����
//	//�����p��������ָ��
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];//��ʾ
//	char* (*pa)[5] = &arr;
//	//char* arr[5]��ʾ����arr����5��Ԫ�أ�ÿ��Ԫ�����ַ�ָ�����ͣ���ȡ��ַ&arrʱ����Ҫ��ָ��(*pa)���洢����arr�ĵ�ַ
//	//[5]��ʾpaָ�����������5��Ԫ�أ�char* ��ʾ�����е�Ԫ������Ϊ�ַ�ָ������
//	//ʵ����&arr��ʾ��������ĵ�ַ��������������Ԫ�صĵ�ַ,�����ַ+1��������������Ĵ�С������&arr+1�����&arr��ֵ��40
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
//	//	printf("%d ", *(*pa + i));//*pa == arr *(*pa+i)�൱�ڶ�arr��ĵ�i����ַ������
//	//	//printf("%d ", (*pa)[i]);//(*pa)�൱���õ���������
//	//}
//	return 0;
//}


////�������������ʽ
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
////������ָ�����ʽ
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
//			//printf("%d ", *(*(p + i) + j));//*(p+i)�ҵ�ÿһ������ĵ�ַ��*��*��p+i��+j���������ҵ���p+i���е�ַ�ĵ�j��Ԫ��
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//arr[3][5]���Կ���һά���飬������������Ԫ�أ�ÿ��Ԫ����int[5]
//	//arr[3][5]���׵�ַ�ǵ�һ������ĵ�ַ
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


//int arr[5];           //arr��һ��5��Ԫ�ص���������
//int* parr1[10];       //parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//int(*parr2)[10];      //parr2��һ��ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int - parr2������ָ��
//int(*parr3[10])[5];   //parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ
////��Ԫ����int 


//void test(int arr[])//OK   �����С����ʡ��
//void test(int arr[10]) // OK
//void test(int *arr)//OK
//void test2(int *arr[20])//OK
//void test2(int **arr)//OK  һ��ָ��ĵ�ַ�������ָ����
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


////��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
//void test(int arr[][5])
//{}
//void test(int arr[3][5])
//{}
//void test2(int arr[3][])  //err
//{}

//void test(int arr[][])  //err
//{}
//void test3(int *arr) //��ά�������������ʾ�ĵ�ַ�ǵ�һ�еĵ�ַ err
//{}

//void test4(int **arr)  //����ָ��ֻ�ܴ��һ��ָ������ĵ�ַ err
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
//	//test(arr);//��ά���鴫��
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
//		printf("%d\n", *(p + i));//ָ�������
//		printf("%d\n", p[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;//�������׵�ַ���ݸ�ָ��p 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}



////����ָ�봫��
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
//	test(arr);//ָ������Ҳ����
//
//	return 0;
//}


////����ָ�� - ��ָ�������ָ��
////����ָ�� - ��ָ������ָ��
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
//	//&������ �� ���������Ǻ����ĵ�ַ
//	//printf("%p ", &Add);//��ӡAdd�����ĵ�ַ
//	//printf("%p ", Add);
//	int(*pa)(int, int) = Add;//����ָ�� - int��ʾ����ֵ���� (*pa)��ʾ����ָ��,�洢�����ĵ�ַ��(int,int)��ʾ�����β�����
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

////void(*p)() ����p��ʾ��������void(*)()��ʾ��������
//(*(void(*)())0)(); // void(*)() - ��һ������ָ������ͣ���ָ��һ��û�в���������void�ĺ�����0��һ�����ͳ�����
////����������ת����Ϊ���������͵ĺ���ָ�롣����ⲿ�ִ�����һ��ָ���ַ0�ĺ���ָ�롣
//// *(void(*)())0 - *��������ʾ�����ã���ζ�Ż�õ�ַ0���ĺ���
//// (*(void(*)())0)()����()��ʾ�Խ����ú�õ��ĺ������е���
////�ܵ���˵���������һ�κ������ã�����0��ַ���Ĳ���Ϊ�޲Σ���������Ϊvoid���Ǹ�����
//
//void (*signal(int, void(*)(int)))(int);//void(*)(int) - ����ָ�����ͣ��޷�����Ϊvoid������Ϊint��   
////signal��һ����������������������������һ����int���ͣ���һ��void(*)(int)�Ǻ���ָ�����ͣ��ú�������һ��int���͵Ĳ���������void��
////������void(*)(int)��ʾsignal�����ķ������ͣ�Ҳ��һ������ָ�롣
////����ָ����Ϊ�������ͱ��뽫�������ʹ���Ĳ������ں���ָ���ڲ� - ��*��Ҫ��������
//void (*            signal(int, void(*)(int))              )(int);
//typedef void(*pfun_t)(int);   //����pfun_t��void(*)(int)�ļ�������ı��ʽ�Ϳ��Լ򻯳�->
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
//	int(*pa)(int, int) = Add;//����ָ�� - int��ʾ����ֵ���� (*pa)��ʾ����ָ��,�洢�����ĵ�ַ��(int,int)��ʾ�����β�����
//	printf("%d\n", (pa)(2, 3));//���ֱ��ʽ�������������ú���
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
//	//ָ������
//	int* arr[5];
//
//	//������4�������ĵ�ַ - ����ָ�������
//	int (*parr[4])(int, int) = {Add,Mul,Div,Sub};//����ָ�������
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](5, 4));
//	}
//
//	return 0;
//}

////����ָ�����; - ת�Ʊ�

//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////2.дһ������ָ������pfArr�����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*) = { my_strcpy,0,0,0 };



////������
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
//	printf("������������������>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pfun(x, y));
//}
//
// 
////ʹ�ú���ָ��ʵ�ּ���������
//int main()
//{
//	int choice = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &choice);
//		
//		switch (choice)
//		{
//		case 0:
//			printf("�ټ���");
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
//			printf("�������������ѡ��");
//			break;
//		}
//	} while (choice != 0);
//
//	return 0;
//}


////ʹ�ú���ָ������ʵ�ֹ���
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
//		printf("��ѡ��:>\n");
//		scanf("%d", &choice);
//		if (choice >= 1 && choice <= 4)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[choice](x, y);
//			printf("%d\n", ret);
//		}
//		else if(choice == 0)
//		{
//			printf("�ټ���\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//
//	} while (choice != 0);
//
//	return 0;
//}



////ָ����ָ�������ָ�룺ָ����ָ�������ָ����һ��ָ�룬ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	//����ָ��pfun
//	void(*pfun)(const char* str) = test;
//
//	//����ָ�������pfunArr
//	void (*pfunArr[3])(const char* str) = { test };
//
//	//ָ����ָ�������ָ��
//	void (*(*ptrTopfun)[3])(const char* str) = &pfunArr;//ptrTopfun��һ������ָ�룬ָ��ָ���������3��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� void(*)(const char*)
//
//	//���õ�һ���������÷�
//	(*ptrTopfun)[0]("sfasfdfsdf");
//
//	return 0;
//}


//�ص�������ͨ������ָ����õĺ���������Ѻ�����ָ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ��
//���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض���ʱ�����������ʱ����һ�����õģ�
//���ڶԸ��¼�������������Ӧ 

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
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//ָ������ָ���ָ��
//	int* (**ppa)[10] = &pa;
//
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&AddҲ����
//	//���ú���
//	int sum = (*pAdd)(1, 2);
//	//����ָ������
//	int (*pArr[10])(int, int) = { pAdd };
//	//ָ����ָ�������ָ��
//	int(*(*ptrToArr)[10])(int, int) = &pArr;
//
//	return 0;
//}


////qsort - ���������������͵�����  ,ʹ������Ҫ��ʵ��һ���ȽϺ���
////����4����������һ�����������������Ԫ�ص�ַ �ڶ����������������Ԫ�ظ��� ������������������ÿ��Ԫ�صĴ�С - ��λ�ֽ�
//// ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����к����ĵ�ַ - �������ʹ�����Լ�ʵ��,����ָ������������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
////void* ���͵�ָ����Խ����������͵ĵ�ַ�����ǲ��ܽ��н����ò�����Ҳ���ܽ��жԵ�ַ+-�����Ĳ���
struct Stu
{
	char name[20];
	int age;
};

int int_cmp(const void* p1, const void* p2)//��������������ָ����β�
{
	return (*(int*)p1 - *(int*)p2); //�Ƚ��β�ǿ������ת��Ϊint���͵�ָ�룬�ٽ�����
}

int float_cmp(const void* p1, const void* p2)//��������������ָ����β�
{
	//if (*(float*)p1 == *(float*)p2) //�Ƚ��β�ǿ������ת��Ϊint���͵�ָ�룬�ٽ�����
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
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ���ô���С�ڵ��ڱȽϣ�Ӧ����strcmp����
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
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
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
//	//qsort(f, num, sizeof(f[0]), float_cmp);//���һ�������ǱȽϺ�����ָ�룬����Ҫ�ٴ������������ͣ����뺯��������
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
//	struct Stu s[3] = { {"����",20},{"����",30},{"����",40} };  // �ṹ������
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
	struct Stu s[3] = { {"����",20},{"����",30},{"����",40} };  // �ṹ������
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
////	printf("%d\n", sizeof(a));  //16   - sizeof(������) - ������������ܴ�С
////	printf("%d\n", sizeof(a+0));  //8  - a+0��ָ�������һ��Ԫ�ص�ָ�룬64λϵͳ��ָ��ռ8���ֽ�
////	printf("%d\n", sizeof(*a));  //4  - *a������ĵ�һ��Ԫ�أ���һ������
////	printf("%d\n", sizeof(a+1));  //8 - a+1��ָ�������һ��Ԫ�ص�ָ�룬64λϵͳ��ָ��ռ8���ֽ�
////	printf("%d\n", sizeof(a[1]));  //4 - a[1]������ĵڶ���Ԫ�أ���һ������
////	printf("%d\n", sizeof(&a));  //8  - ��ָ�����������ָ��
////	printf("%d\n", sizeof(*&a));  //16 - *&aʵ���Ͼ������鱾������4������
////	printf("%d\n", sizeof(&a+1));  //8 - ��ָ���������λ�õ�ָ��
////	printf("%d\n", sizeof(&a[0]));//8 - ��ָ�������һ��Ԫ�ص�ָ��
////	printf("%d\n", sizeof(&a[0]+1));//8 - ��ָ������ڶ���Ԫ�ص�ָ��
//
//
//	char arr[] = { 'a','b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));		 // 6 �����С6*1
//	//printf("%d\n", sizeof(arr+0));		 // 8 arr����Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*arr));		 // 1 *arr������ĵ�һ��Ԫ�� ��һ��char
//	//printf("%d\n", sizeof(arr[1]));		 // 1
//	//printf("%d\n", sizeof(&arr));		 // 8
//	//printf("%d\n", sizeof(&arr+1));		 // 8
//	//printf("%d\n", sizeof(&arr[0]+1));   // 8
//
//	printf("%d\n", strlen(arr));		 // ���ֵ
//	printf("%d\n", strlen(arr+0));		 // ���ֵ
//	printf("%d\n", strlen(*arr));		 // strlen��Ҫ����һ����ַ��*arr������������Ԫ�ص�ַa�����Գ������ 
//	printf("%d\n", strlen(arr[1]));		 // ����
//	printf("%d\n", strlen(&arr));		 // ���ֵ
//	printf("%d\n", strlen(&arr+1));		 // ���ֵ - 6
//	printf("%d\n", strlen(&arr[0]+1));   // ���ֵ - 1
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
//	//printf("%d\n", strlen(*arr));      //����
//	//printf("%d\n", strlen(arr[1]));    //����
//	//printf("%d\n", strlen(&arr));      //6  &arr - ����ĵ�ַ - ����ָ��char(*p)[7] = &arr;
//	//printf("%d\n", strlen(&arr+1));    //�������ַ���������Ϊ���ֵ
//	//printf("%d\n", strlen(&arr[0]+1)); //5
//
//	//char* p = "abcdef";   //ָ��p�ŵ���a�ĵ�ַ
//	//printf("%d\n", sizeof(p));        //8   ָ��p�Ĵ�С - �ַ�����ŵ�ַ��Ϊ8
//	//printf("%d\n", sizeof(p+1));      //8   p+1��������ַ�b�ĵ�ַ
//	//printf("%d\n", sizeof(*p));       //1   ������Ϊa�������СΪ1
//	//printf("%d\n", sizeof(p[0]));     //1   p[0] == *(p+0) = a
//	//printf("%d\n", sizeof(&p));       //8   ָ��p�ĵ�ַ
//	//printf("%d\n", sizeof(&p+1));     //8   ָ��p����ĵ�ַ
//	//printf("%d\n", sizeof(&p[0]+1));  //8   �ַ�b�ĵ�ַ
//
//	//printf("%d\n", strlen(p));         //6
//	//printf("%d\n", strlen(p + 1));     //5
//	//printf("%d\n", strlen(*p));        //����
//	//printf("%d\n", strlen(p[0]));      //����
//	//printf("%d\n", strlen(&p));        //���ֵ
//	//printf("%d\n", strlen(&p + 1));    //���ֵ
//	//printf("%d\n", strlen(&p[0] + 1)); //5 �͵ڶ������ʽ���ƣ���"bsdef"��ʼ����
//
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr));              //48   - ���������С 12*4
//	printf("%d\n", sizeof(arr[0][0]));        //4    - ��һ��Ԫ�ش�С
//	printf("%d\n", sizeof(arr[0]));           //16   - ��һ�д�С arr[0]�൱�ڵ�һ����Ϊһά�������������
//	//sizeof(arr[0])����������������sizeof�ڣ��������һ�еĴ�С 4*4
//	printf("%d\n", sizeof(arr[0]+1));         //8    - arr[0]��ʾ��Ԫ�ص�ַ����Ԫ�ص�ַ+1Ϊ���еڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(arr[0] + 1)));    //4    - ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(arr+1));            //8    - arr�Ƕ�ά�������������û��sizeof(������)��Ҳû��&��������
//	//����arr����Ԫ�ص�ַ������ά�������Ԫ���ǵ�һ�У����arr+1�ǵڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(arr+1)));         //16   - �ڶ��е�4��Ԫ�ش�С
//	printf("%d\n", sizeof(&arr[0]+1));        //8    - �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&arr[0] + 1)));   //16   - �ڶ��е�4��Ԫ��
//	printf("%d\n", sizeof(*arr));             //16   - ��һ�е�4��Ԫ��
//	printf("%d\n", sizeof(arr[3]));           //16   - �����е�4��Ԫ�ش�С��������û�е�����
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//����ָ������ǿ��ת��Ϊintָ������
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//���Ϊ2,5��aΪ������Ԫ�ص�ַ��a+1ʱΪ����ڶ���Ԫ�صĵ�ַ��������ʱΪ2��ָ��ptrָ��(&a+1)�ĵ�ַ
//	//&aȡ��������������ĵ�ַ�����ָ��ptr�б���ĵ�ַΪ���������Ǹ���ַ�����*(ptr-1)ʱΪ��������һ��Ԫ��5
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
////����p�ĵ�ַΪ0x100000.���±��ʽ��ֵ�ֱ��Ƕ���
////��֪�ṹ��Test���͵ı��˴�С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);  //p+1�ĵ�ַΪ0x100014,pָ�������ṹ��ĵ�ַ
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001  ��pת��Ϊ�޷��ŵ�long�ͣ���ʱ��ַΪ1048576������1��ת��Ϊ16���ƾ���0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004  ��pǿ��ת��Ϊ�޷�������ָ�룬+1����һ������ָ��Ĵ�С��Ϊ0x100004
//
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//��ʱptr1ָ��ָ�����������ĵ�ַ
//	int* ptr2 = (int*)((int)a + 1);//������Ԫ�ص�ַǿ������ת��Ϊint�ͣ���1���ַ����ƫ����һ���ֽ�
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] = *(ptr+(-1)),��ʱ�õ��������е�4��*ptr2��ʱΪ20000000
//
//
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//С����ʵ��������ʹ�ö�������������صڶ������ʽ�Ľ����ʵ���ϴ�ʱ����Ϊ
//	//{1,3,5}����a[0][0] = 1 ,a[0][1] = 3, a[1][0] = 5��ʣ�µ�3��δ����
//	int* p;
//	p = a[0];//��ʱa[0] = ��һ��Ԫ��1,3������p[0] = 1
//	printf("%d", p[0]);//0,1
//
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];   //����ָ����4��Ԫ�أ�ÿ��Ԫ��ָ��һ������ĵ�ַ�����p+1ָ��a[0][4]��a[1][3]�ĵ�ַ��
//	p = a;
//	printf("%p\n %d\n",( & p[4][2] - &a[4][2]), ( & p[4][2] - &a[4][2]));//p[4][2]�ȼ���*(*(p+4)+2) = a[3][3]�ĵ�ַ
//	//��ʱ& p[4][2] - &a[4][2]֮�����4��Ԫ�أ����%dΪ-4����ӡ��ַʱ��ӡ����-4�Ĳ������ΪFFFFFFFC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//��&aaʱ����ʾȡ��������ĵ�ַ����ʱptr1ָ�����������Ǹ���ַ
//	int* ptr2 = (int*)(*(aa + 1));//aa+1��ʾָ��ڶ��е���Ԫ�ص�ַ��aa[1]����ʱptr2�õõ��ڶ�����Ԫ��6��ַ
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };  //ָ������ - ���3��ָ��ָ�������ַ������׵�ַ
//	char** pa = a;//char** pa = char* *pa,��ʾpaָ���д����char*���͵ĵ�ַ��a�ĵ�ַ,pa�д����ָ��������׵�ַ
//	pa++;//pa+1,��ʱ������һ��char*�ı�����paָ��ָ������ĵڶ���Ԫ��
//	printf("%s\n", *pa);//������Ϊat
//
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//���ֵ  ER cpp��ʱ��ŵĵ�ַΪc+1,�ٴξ���++cppָ��c+1��ŵĵ�ַ��
//	//�����ú��õ�c+1�ĵ�ַ����--�õ�c�ĵ�ַ����ʱָ��ENTER������ĸ��ַ��+3�õ�E�ĵ�ַ����ӡ�õ�ER
//	printf("%s\n", *cpp[-2] + 3);//FIRST ST  cpp[-2]�ȼ���*(cpp - 2)������*cpp[-2] + 3 == **(cpp-2)+3
//	//��Ϊcpp��ʱָ�����c+1������cpp-2ʹcppָ��c+3�����ַ�����ν����ú�ָ��FIRST����ַ������׵�ַ��+3ָ��S�ĵ�ַ����ӡ��ΪST
//	printf("%s\n", cpp[-1][-1] + 1);//ENTER  EW  cpp[-1][-1] == *(*(cpp-1)-1)����*��cpp-1����cp[1]��c+2�ĵ�ַ��
//	//�ٴ�-1ȡ��c+1�ĵ�ַ�������ú�ָ��NEW������ĸ��ַ��+1��ָ��E����ַ�
//
//	return 0;
//}

//���ַ������� - strlen
//���Ȳ������Ƶ��ַ������� - strcpy strcat strcmp
// ���������Ƶ��ַ������� - strncpy strncat strncmp
// �ַ������� - strstr strtok
// ������Ϣ���� - strerror
// �ڴ�������� - memcpy memmove memset memcmp
//


////1.�������ķ���
////2.�ݹ�
////3.ָ�� - ָ��
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
//	////// ����ʾ��
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
//	//����str2ָ����ַ�����strָ��Ŀռ䣬����'\0'
//	while (*str++ = *str2++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//
//int main()
//{
//	//Ŀ��ռ���޸�
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
//		printf("�ַ���1���ַ���2���");
//	}
//	else
//	{
//		printf("�ַ���1���ַ���2�����");
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
//	//����str2ָ����ַ�����strָ��Ŀռ䣬����'\0'
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
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//
//int main()
//{
//	//Ŀ��ռ���޸�
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
//		printf("�Ӵ�������\n");
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



////strerror  char* strerror(int errnum);  //���ش����룬����Ӧ�Ĵ�����Ϣ
//int main()
//{
//	//������ - ������Ϣ
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//....
//	//errno ��һ��ȫ�ֵĴ�����ı�������c���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
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


//���� - ����������������ͷ�����
// iscntrl  �κο����ַ�
// isspace  �հ��ַ����ո�' '����ҳ'\f'������'\n'���س�'\r',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
// isdigit  ʮ�������� 0-9
// isxdigit ʮ���������֣���������ʮ�������飬Сд��ĸa-f,��д��ĸA��F
// islower  Сд��ĸa-z
// isupper  ��д��ĸA-Z
// isalpha  ��ĸa-z��A-Z
// isalnum  ��ĸ�������֣�a-z,A-Z,0-9
// ispunct  �����ţ��κβ��������ֻ�����Ļ��ͼ���ַ�
// isgraph  �κ�ͼ���ַ�
// isprint  �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
//int tolower(int c)����д��ĸת��ΪСд��ĸ 
//int toupper(int c)��Сд��ĸת��Ϊ��д��ĸ

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
////void* - ͨ�����͵�ָ�룬������ָ��
////void* memcpy(void* destination,const void* source,size_t num);��λ���ֽ�
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
//		//ǰ->��
//	}
//	else
//	{
//		//��->ǰ
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
////	struct S arr3[] = { {"����",20},{"����",39} };
////	struct S arr4[3] = { 0 };
////	memcpy(arr4, arr3, sizeof(arr3));
////	int sz = sizeof(arr);
////	memcpy(arr2, arr, sz);
////
////	return 0;
////}
//
////C���Ա�׼
////memcpyֻҪ�����ص����ڴ濽���Ϳ�����
////memmove�����ص��ڴ�Ŀ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ret = my_memmove(arr + 2, arr, 20);//��1-5������3-7��λ����
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
//	//memset(arr, 1, 10);//error ֻ�ı�ǰ10���ֽڲ���10��Ԫ��
//
//	return 0;
//}

////����һ���ṹ������
////����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
////����ѧ��������->����+�绰+�Ա�
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
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

////�����ṹ������
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


////���ݽṹ���������ڴ��д洢�Ľṹ
////����ÿ���ڵ�������
////�ṹ��������
//struct Node
//{
//	int data;//������
//	struct Node* next;//�����һ���ڵ�ĵ�ַ 4���ֽڻ���8���ֽ�   ָ����
//};


//
//typedef struct Node
//{
//	int data;//������
//	struct Node* next;//�����һ���ڵ�ĵ�ַ 4���ֽڻ���8���ֽ�   ָ����
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




////�ṹ��Ķ������
////1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
////2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ��
////������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
////3.�ṹ����ܴ�СΪ��������(ÿ����Ա��������һ��������)��������
////4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������
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

////�޸�Ĭ�϶����� #pragma pack(8)   //����Ĭ�϶�����Ϊ8
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
////��ֵ
//Print1(struct S tmp)
//{
//	printf("%d %c %lf", tmp.a, tmp.c, tmp.d);
//}
//
////��ַ
//Print2(const struct S* ps)
//{
//	printf("%d %c %lf", ps->a, ps->c, ps->d);
//}
// 
////��ѡPrint2���������ε�ʱ�򣬲�������Ҫѹջ�ģ�����ʱ��Ϳռ��ϵ�ϵͳ�������������һ���ṹ������ʱ��
////�ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�������½���
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



//λ��  - ������λ
//λ�ε������ͽṹ�������Ƶģ���������ͬ��
//1.λ�εĳ�Ա�����ǣ�int / unsigned int �� signed int  short char�����ԣ����ǳ�Ա����һ�㶼����ͬ��
//2.λ�εĳ�Ա��������һ��ð�ź�����

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

////λ�ε��ڴ����
////1.λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)�ķ�ʽ������
////2.λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��
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


////ö��
////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
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


////����- ������ - ������
////����Ҳ��һ��������Զ������ͣ��������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����һ��ռ�
////���ϵ��ص㣺���ϵĳ�Ա�ǹ���һ���ڴ�ռ䣬����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С(��Ϊ�������ٵ����������������Ǹ���Ա)
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//
//	return 0;
//}

////���ϴ�С�ļ���
////���ϵĴ�С����������Ա�Ĵ�С
////������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������
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
