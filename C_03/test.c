#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

////������ƹ������ļ������֣������ļ��������ļ�
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
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


////��������ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ
//// FILE* fopen(const char* filename,const char* mode)
////int fclose(FILE* stream)
//int main()
//{
//	//���ļ�
//	////���·��
//	// ".."��ʾ��һ��·��   "."��ʾ��ǰ·��
//	// //fopen("../file.txt", "r")
//	//fopen("file.txt", "r")
//	//����·��
//	/*fopen("G:\\C-project\\C_03\\file.txt", "r");*/
//	FILE* pf = fopen("file.txt", "r");
//	if (pf = NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	
//	//���ļ�
//	
//	//�ر��ļ�
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
//	////�Ӽ��̶�ȡһ���ı���Ϣ
//	//char buff[1024] = { 0 };
//	////fgets(buff, 1024, stdin);
//	////fputs(buff, stdout);//�������׼�����
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
//	//��ʽ������ʽд�ļ�
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
//	////��ʽ������������
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.scores), &(s.arr));
//	//printf("%d %f %s", s.n, s.scores, s.arr);
//
//	//fclose(pf);
//	//pf = NULL;
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.scores), &(s.arr));
//	fprintf(stdout,"%d %f %s", s.n, s.scores, s.arr);
//	return 0;
//}

//�Ա�һ�麯��
//scanf/fscanf/sscanf
//printf/fprintf/sprintf
// scanf/printf ����Ա�׼������/��׼������ĸ�ʽ������/������
//fscanf/fprintf ���������������/������ĸ�ʽ������/������
//sscanf/sprintf �����������/������ĸ�ʽ������/������
//sscanf�Ǵ��ַ����ж�ȡ��ʽ��������  sprintf�ǰѸ�ʽ�����������(�洢��)�ַ���
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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buff
//	sprintf(buff, "%d %f %s", s.n, s.score, s.arr);
//	//��buff�ж�ȡ��ʽ�������ݵ�tmp��
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
//	//struct S s = { "����",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��  int fseek(FILE* stream,long offset,int origin)
////ftell �����ļ�ָ���������ʼλ�õ�ƫ����  long int ftell(FILE* stream)
////rewind ���ļ�ָ���λ�ûص��ļ�����ʼλ�� void rewind(FILE* stream)
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

////�ļ������ж������ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ��Ƿ��������Ӧ���ڵ��ļ���ȡ������ʱ��
////�ж��Ƕ�ȡʧ�ܽ������������ļ�β����
////�ı��ļ���ȡ�Ƿ�����жϷ���ֵ�Ƿ�ΪEOF(fgetc)����NULL(fgets)
////�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�����ʵ��Ҫ���ĸ���
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
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF)
//	{
//		putchar(c);
//	}
//	//�жϽ���ԭ��
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//��ANSI C���κ�һ��ʵ���У�����������ͬ�Ļ��� ��һ���Ƿ��뻷���������������Դ���뱻ת��Ϊ��ִ�еĻ���ָ��
//�ڶ�����ִ�л�����������ʵ��ִ�д���
// test.c -> test.i -> test.s -> test.o
//���뻷���������������������� ���б�������Ԥ���� ���� ��������������
//Ԥ����/Ԥ����1.#include ͷ�ļ��İ��� 2.ע��ɾ����ʹ�ÿո��滻ע�� 3.#define �����ı�����
//���룺��C���뷭��ɻ����� ������1.�﷨���� 2.�ʷ����� 3.������� 4.���Ż���
//��ࣺ�ѻ�����ת�����˶�����ָ��γɷ��ű�
//��������1.�ϲ��α� 2.���ű�ĺϲ��ͷ��ű���ض�λ
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


//Ԥ�������
//__FILE__  ���б����Դ�ļ�
//__LINE__  �ļ���ǰ���к�
//__DATE__  �ļ������������
//__TIME__  �ļ��������ʱ��
//__STDC__  �����������ѭANSI C,��ֵΪ1������δ����


//int main()
//{
//	//printf("%s\n %s :%s\n", __FILE__,__DATE__,__TIME__);
//	//printf("%d\n", __LINE__);
//	//д��־�ļ�
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
//#define reg register   Ϊregister����ؼ��֣�����һ����̵�����
//#define do_forever   for(;;)   �ø�����ķ������滻һ��ʵ��
//#define CASE break;case      ��дcase����ʱ���Զ���breakд��
//��������stuff���������Է�Ϊ���У��������һ���⣬ÿ�е����Ҫ��һ����б��(���з�)\


//#define���ư�����һ���涨���ʰѲ����滻���ı��У�����ʵ��ͨ����Ϊ��(macro)�����(define macro)
//#define name(parament - list) stuff���е�parament-list��һ���ɶ��Ÿ����ķ��ű����ǿ��ܳ�����stuff��
//ע�⣺�����б�������ű�����name���ڣ��������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ����
 


//#��##
//ʹ��#����һ���������ɶ�Ӧ���ַ���
//##���԰�λ�������ߵķ��źϳ�һ�����š�������궨��ӷ�����ı�Ƭ�δ�����ʶ��

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
//	//printf("%d\n"��Class##84);
//	//printf("%d\n"��Class84);
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


////�������õĺ����
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


////#undef ָ�������Ƴ�һ���궨��
//
//#define MAX  100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//	return 0;
//}


//�����ж���


////��������
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

//#if �������ʽ
//
//#endif
//
////�����֧����������
//#if �������ʽ
//
//#elif �������ʽ
//
//#else
//
//#endif 

////�ж��Ƿ񱻶���
//#if defined(symbol)
//#ifdef symbol
//
//#if !defined(symbol)
//#ifndef symbol

////Ƕ��ָ��
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



////ģ��ʵ��offset��
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
//		if ((arr[i] & mask) == 0)
//		{
//			num1 ^= arr[i];
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



//дһ���� ���Խ�һ�������Ķ���������λ��ż��λ����
#define EXCHANGE(num)    ((num&0xAAAAAAAA)>>1)+((num&0x55555555)<<1)
int main()
{
	//10100101110011110011010110101111
	int num = 0;
	scanf("%d", &num);

	printf("%d", EXCHANGE(num));
	return 0;
}