#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

////��ǰ֪�����ڴ��ʹ�÷�ʽ��Ҫ���֣�1.����һ������ �ֲ����� - ջ�� ȫ�ֱ��� - ��̬��  2.����һ������
////C�����п��Դ����߳����� - C99�����ӵ�
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
//	struct S arr[50];//50��struct S���͵�����
//
//	return 0;
//}


////��̬�ڴ���� - ���� 
////��Ҫ�漰4������ - malloc free calloc realloc
//int main()
//{
//	//���ڴ�����10�����οռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//���ռ䶯̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;//
//	return 0;
//}

////calloc C���Ի��ṩ��һ������calloc����̬�ڴ����  void* calloc(size_t num,size_t size);
////�����Ĺ�����Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
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


////realloc ���������Զ�̬�����ڴ��С�ĵ��� void* realloc(void* ptr,size_t size);����ֵΪ����֮����ڴ���ʼλ�ã�
////��������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ�
//
////reallocʹ��ע�����1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
////2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ����򣬿���һ����������Ŀռ䣬
////���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
////3.��Ҫ��һ���µı���������realloc�����ķ���ֵ
//
//int main()
//{
//	int* p = (int*)malloc(20);

	////reallocʵ�ֺ�malloc��ͬ�Ĺ���
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
//	//������ʹ��malloc���ٵ�20���ֽڿռ� ����������20���ֽڲ�������ϣ������40���ֽڵĿռ䣬��ʱ����ʹ��realloc������
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

////�����Ķ�̬�ڴ����
//
//int main()
//{
//	////1.��NULLָ��Ľ����ò��� - malloc����ʧ��
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////2.�Զ�̬�����ڴ��Խ�����
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
//	////3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//	////4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ���ֿռ�
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
//	////pָ���λ�÷����仯 �ͷ�ʧ��
//	//free(p);
//	//p = NULL;
//
//	////5.��ͬһ�鶯̬�ڴ����ͷ�
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
//	////6.��̬�����ڴ������ͷ�(�ڴ�й©)
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
//	GetMemory(str);//��û�н�str��ַ����GetMemory������str��ֵ���ݵ���ʽ����p��p��GetMemory�������βΣ�
//	//ֻ�ܺ����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//	strcpy(str, "hello world");//str�ڲ���ʱ���ɴ���NULL�����ַ������Ƶ�NULLָ�봦�ᷢ���Ƿ����ʣ���������������
//	printf(str);
//}
//
//int main()
//{
//
//	Test();
//	return 0;
//}

////�޸���ȷ�Ĵ���1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//��û�н�str��ַ����GetMemory������str��ֵ���ݵ���ʽ����p��p��GetMemory�������βΣ�
//	//ֻ�ܺ����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//	strcpy(str, "hello world");//str�ڲ���ʱ���ɴ���NULL�����ַ������Ƶ�NULLָ�봦�ᷢ���Ƿ����ʣ���������������
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

////�޸���ȷ�Ĵ���2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//��û�н�str��ַ����GetMemory������str��ֵ���ݵ���ʽ����p��p��GetMemory�������βΣ�
//	//ֻ�ܺ����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//	strcpy(str, "hello world");//str�ڲ���ʱ���ɴ���NULL�����ַ������Ƶ�NULLָ�봦�ᷢ���Ƿ����ʣ���������������
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
//	char p[] = "hello world";//�ֲ�����ֻ���ں����ڲ���Ч������������ֲ��������ٵ��ڴ�ỹ������ϵͳ
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
//	Test();//����ַǷ������ڴ������������ֵ
//	return 0;
//}

//int* test()
//{
//	//static int a = 10;//��ʱa�ھ�̬�� ���򲻻����
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
//	int* ptr = malloc(100);//���ʱ��Ҳû���� malloc���ٵĿռ��ڶ���
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
//	//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
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
//	free(str);//free�ͷ�strָ��Ŀռ��,�������str��ΪNULL
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�ڴ��Ѿ��ͷţ��ٴζ�����ڴ���в����ǷǷ������ڴ�
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


////�������� : �ṹ�е����һ��Ԫ������ʱδ֪��С�����飬��ͽ������������Ա
//// �ṹ�����������Աǰ��������һ����Ա��sizeof���ص����ֽṹ��С����������������ڴ�
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;

//struct S
//{
//	int n;
//	int arr[];//δ֪��С - ���������Ա������Ĵ�С�ǿ��Ե�����
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

