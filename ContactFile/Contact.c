#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

//���ܣ�1.���1000�����ѵ���Ϣ  2.�������֡��绰���Ա�סַ������
//2.���Ӻ��ѵĹ��� ɾ��ָ�����ֵĺ�����Ϣ ���Һ�����Ϣ �޸ĺ�����Ϣ ��ʾ������Ϣ ����


static int FindByName(struct Contact* ps, char name[MAX_NAME]);


//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULLT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULLT_SZ;
	//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size = ps->capacity)
	{
		//����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data == ptr;
			ps->capacity += 2;
			printf("���ݳɹ���\n");
		}
		else
		{
			printf("����ʧ�ܣ�\n");
		}
	}
}


//���ͨѶ¼
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼������ 1.������˾����� 2.�������޲���
	CheckCapacity(ps);
	//��������
	printf("��������ϵ��������>");
	scanf("%s", ps->data[ps->size].name);
	printf("��������ϵ�����䣺>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("��������ϵ���Ա�>");
	scanf("%s", ps->data[ps->size].sex);
	while (1)
	{
		printf("��������ϵ�˵绰��>");
		scanf("%s", ps->data[ps->size].tele);

		if (strlen(ps->data[ps->size].tele) <= 11)
		{
			break;
		}
		else
		{
			printf("�绰���벻�ܳ���11λ������������");
		}
	}
	printf("��������ϵ�˵�ַ��>");
	scanf("%s", ps->data[ps->size].addr);
	printf("��ӳɹ���");
	ps->size++;
	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("��������ϵ��������>");
		scanf("%s", ps->data[ps->size].name);
		printf("��������ϵ�����䣺>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("��������ϵ���Ա�>");
		scanf("%s", ps->data[ps->size].sex);
		while (1)
		{
			printf("��������ϵ�˵绰��>");
			scanf("%s", ps->data[ps->size].tele);

			if (strlen(ps->data[ps->size].tele) <= 11)
			{
				break;
			}
			else
			{
				printf("�绰���벻�ܳ���11λ������������");
			}
		}
		printf("��������ϵ�˵�ַ��>");
		scanf("%s", ps->data[ps->size].addr);
		printf("��ӳɹ���");
		ps->size ++;
	}*/

}

void ShowContact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ���������ϵ�ˣ�\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < (ps->size); i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
	
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ��������");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ������� -1
	int pos = FindByName(ps, name);
	
	//2.ɾ��

	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
}


void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��������");
	scanf("%s", name);

	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("�ҵ��ˣ�\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ��������");
	scanf("%s", name);

	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("��������ϵ��������>");
		scanf("%s", ps->data[pos].name);
		printf("��������ϵ�����䣺>");
		scanf("%d", &(ps->data[pos].age));
		printf("��������ϵ���Ա�>");
		scanf("%s", ps->data[pos].sex);
		while (1)
		{
			printf("��������ϵ�˵绰��>");
			scanf("%s", ps->data[pos].tele);

			if (strlen(ps->data[pos].tele) <= 11)
			{
				break;
			}
			else
			{
				printf("�绰���벻�ܳ���11λ������������");
			}
		}
		printf("��������ϵ�˵�ַ��>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ���");

	}
}


int age_cmp(const void* p1, const void* p2)
{
	return (((struct Contact*)p1)->data->age - ((struct Contact*)p2)->data->age);
}

int name_cmp(const void* p1, const void* p2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ���ô���С�ڵ��ڱȽϣ�Ӧ����strcmp����
	return strcmp(((struct Contact*)p1)->data->name, ((struct Contact*)p2)->data->name);
}

void Swap(char* buffer1, char* buffer2, int width)
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


void Bubble_sort2(void* base, int sz, int width, int (*cmp)(const void* p1, const void* p2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
			{
				Swap((char*)base + width * j, (char*)base + width * (j + 1), width);
			}
		}
	}
}

void SortContact(struct Contact* ps)
{
	char str[5];

	while (1)
	{
		printf("����������ʽ������������>");
		scanf("%s", str);

		if (strcmp(str,"����") == 0 )
		{
			Bubble_sort2(ps->data, ps->size, sizeof(struct PeoInfo), name_cmp);
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			int i = 0;
			for (i = 0; i < ps->size; i++)
			{
				
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
					ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
			}
			break;
		}
		else if (strcmp(str, "����") == 0)
		{
			Bubble_sort2(ps->data, ps->size, sizeof(struct PeoInfo), age_cmp);
			int i = 0;
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			for (i = 0; i < ps->size; i++)
			{
				
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
					ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
			}
			break;
		}
		else
		{
			printf("�������������ѡ����������!");
		}
	}
	
}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}


void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("Contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//дͨѶ¼�е����ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}

	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}


void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfread = fopen("Contact.dat", "rb");
	if (pfread == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//��ȡ�ļ�,�ŵ�ͬѧ¼��
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfread))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfread);
	pfread = NULL;

}


