#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

//功能：1.存放1000个好友的信息  2.包含名字、电话、性别、住址、年龄
//2.增加好友的功能 删除指定名字的好友信息 查找好友信息 修改好友信息 显示好友信息 排序


static int FindByName(struct Contact* ps, char name[MAX_NAME]);


//初始化通讯录
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULLT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULLT_SZ;
	//把文件中已经存放的通讯录中的信息加载到通讯录中
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size = ps->capacity)
	{
		//增容
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data == ptr;
			ps->capacity += 2;
			printf("增容成功！\n");
		}
		else
		{
			printf("增容失败！\n");
		}
	}
}


//添加通讯录
void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量 1.如果满了就增容 2.不满就无操作
	CheckCapacity(ps);
	//增加输入
	printf("请输入联系人姓名：>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入联系人年龄：>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入联系人性别：>");
	scanf("%s", ps->data[ps->size].sex);
	while (1)
	{
		printf("请输入联系人电话：>");
		scanf("%s", ps->data[ps->size].tele);

		if (strlen(ps->data[ps->size].tele) <= 11)
		{
			break;
		}
		else
		{
			printf("电话号码不能超过11位，请重新输入");
		}
	}
	printf("请输入联系人地址：>");
	scanf("%s", ps->data[ps->size].addr);
	printf("添加成功！");
	ps->size++;
	/*if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入联系人姓名：>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入联系人年龄：>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入联系人性别：>");
		scanf("%s", ps->data[ps->size].sex);
		while (1)
		{
			printf("请输入联系人电话：>");
			scanf("%s", ps->data[ps->size].tele);

			if (strlen(ps->data[ps->size].tele) <= 11)
			{
				break;
			}
			else
			{
				printf("电话号码不能超过11位，请重新输入");
			}
		}
		printf("请输入联系人地址：>");
		scanf("%s", ps->data[ps->size].addr);
		printf("添加成功！");
		ps->size ++;
	}*/

}

void ShowContact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		printf("通讯录为空，请输入联系人！\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要删除的联系人姓名：");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回 -1
	int pos = FindByName(ps, name);
	
	//2.删除

	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功！\n");
	}
}


void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人姓名：");
	scanf("%s", name);

	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("找到了！\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人姓名：");
	scanf("%s", name);

	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入联系人姓名：>");
		scanf("%s", ps->data[pos].name);
		printf("请输入联系人年龄：>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入联系人性别：>");
		scanf("%s", ps->data[pos].sex);
		while (1)
		{
			printf("请输入联系人电话：>");
			scanf("%s", ps->data[pos].tele);

			if (strlen(ps->data[pos].tele) <= 11)
			{
				break;
			}
			else
			{
				printf("电话号码不能超过11位，请重新输入");
			}
		}
		printf("请输入联系人地址：>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功！");

	}
}


int age_cmp(const void* p1, const void* p2)
{
	return (((struct Contact*)p1)->data->age - ((struct Contact*)p2)->data->age);
}

int name_cmp(const void* p1, const void* p2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用大于小于等于比较，应该用strcmp函数
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
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
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
		printf("请输入排序方式：姓名或年龄>");
		scanf("%s", str);

		if (strcmp(str,"姓名") == 0 )
		{
			Bubble_sort2(ps->data, ps->size, sizeof(struct PeoInfo), name_cmp);
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
			int i = 0;
			for (i = 0; i < ps->size; i++)
			{
				
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
					ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
			}
			break;
		}
		else if (strcmp(str, "年龄") == 0)
		{
			Bubble_sort2(ps->data, ps->size, sizeof(struct PeoInfo), age_cmp);
			int i = 0;
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
			for (i = 0; i < ps->size; i++)
			{
				
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
					ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
			}
			break;
		}
		else
		{
			printf("输入错误，请重新选择排序类型!");
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
	//写通讯录中的数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}

	//关闭文件
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
	//读取文件,放到同学录中
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfread))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfread);
	pfread = NULL;

}


