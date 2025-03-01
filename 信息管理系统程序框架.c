#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ElemType
{
	char id[20];
	char name[20];
	char sex[20];
	double x;
	double y;
	double z;
} elemType;

typedef struct Node
{
	elemType data;
	struct Node *next;
} node;

/**************************************
功能：输入学生信息
形参: elemType *x
返回值：void
日期：2025.03.01
版本：v1
作者: 韩贤煜
***************************************/
void inputElement(elemType *x)
{
	scanf("%s %s %s %lf %lf %lf", x->id, x->name, x->sex, &x->x, &x->y, &x->z);
}

/**************************************
功能：输出学生信息
形参: elemType x
返回值：void
日期：2025.03.01
版本：v1
作者: 韩贤煜
***************************************/
void printElement(elemType x)
{
	printf("%s %s %s %.1f %.1f %.1f\n", x.id, x.name, x.sex, x.x, x.y, x.z);
}

/**************************************
功能：初始化链表
形参: node **head
返回值：void
日期：2025.03.01
版本：v1
作者: 韩贤煜
***************************************/
void init(node **head)
{
	*head = (node *)malloc(sizeof(node) * 1);
	(*head)->next = NULL;
}

/**************************************
功能：插入学生信息
形参: node **tail, elemType x
返回值：void
日期：2025.03.01
版本：v1
作者: 韩贤煜
***************************************/
void insertElement(node **tail, elemType x)
{
	node *p = (node *)malloc(sizeof(node) * 1);
	p->data = x;
	p->next = NULL;
	(*tail)->next = p;
	(*tail) = p;
}

/**************************************
功能：输出所有学生信息
形参: node *head
返回值：void
日期：2025.03.01
版本：v1
作者: 韩贤煜
***************************************/
void printList(node *head)
{
	node *p = head->next;

	while (p)
	{
		printElement(p->data);
		p = p->next;
	}
}

/**************************************
功能：查找学生信息
形参: node *head, char id[]
返回值：node*
日期：2025.03.01
版本：v1
作者: 韩贤煜
***************************************/
node *findElement(node *head, char id[])
{
	node *p = head->next;

	while (p)
	{
		if (strcmp(p->data.id, id) == 0)
			break;
		p = p->next;
	}

	return p;
}

int main()
{
	elemType x;
	char id[20];
	node *temp;
	// 1、链表或顺序表初始化
	node *head;
	init(&head);
	node *tail = head;

	while (1)
	{
		char op[20];
		// 2、读入命令字符串
		scanf("%s", op);
		// 3、如果 插入
		if (strcmp(op, "Insert") == 0)
		{
			printf("Insert:\n");
			// 3.1、输入学生信息
			inputElement(&x);
			insertElement(&tail, x);
			printElement(x);
			// 3.2如果成功插入信息（函数），则输出学生信息，
			// 否则，输出 "Failed\n"
		}
		// 4、List
		if (strcmp(op, "List") == 0)
		{
			printf("List:\n");
			// 4.1排序（函数）
			// 4.2输出（函数）
			printList(head);
		}
		// 5、修改
		if (strcmp(op, "Change") == 0)
		{
			printf("Change:\n");
			// 5.1输入学生信息
			// 5.2如果修改成功（函数），则输出学生信息
			// 否则输出 Failed
		}
		// 6、删除学生信息
		if (strcmp(op, "Delete") == 0)
		{
			printf("Delete:\n");
			// 6.1输入学号
			// 6.2如果成功删除（函数）则deleted
			// 否则 Failed
		}
		// 7、查找，
		if (strcmp(op, "Find") == 0)
		{
			printf("Find:\n");
			// 输入学号
			scanf("%s", id);
			// 如果查找成功（函数），输出学生信息，否则，输出Failed
			temp = findElement(head, id);

			if (temp)
			{
				printElement(temp->data);
			}
			else
			{
				printf("Failed\n");
			}
		}

		if (strcmp(op, "Quit") == 0)
		{
			printf("Good bye!\n");
			break;
		}
	}

	return 0;
}

/**************************************
功能：
形参:
返回值：
日期：
版本：
作者:
***************************************/

/**************************************
主函数项目：学生信息管理系统
要求：数据结构必须用链表、尽可能用函数
1. 输入输出学生信息
2. 创建链表
3. 链表的插入结点
4. 链表的遍历、打印
5. 删除结点
6. 查找结点
7. 修改结点
8. 排序
9. 交换二个elemType的值
****************************************/