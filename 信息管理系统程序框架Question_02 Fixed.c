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
���ܣ�����ѧ����Ϣ
�β�: elemType *x
����ֵ��void
���ڣ�2025.03.01
�汾��v1
����: ������
***************************************/
void inputElement(elemType *x)
{
	scanf("%s %s %s %lf %lf %lf", x->id, x->name, x->sex, &x->x, &x->y, &x->z);
}

/**************************************
���ܣ����ѧ����Ϣ
�β�: elemType x
����ֵ��void
���ڣ�2025.03.01
�汾��v1
����: ������
***************************************/
void printElement(elemType x)
{
	printf("%s %s %s %.1f %.1f %.1f\n", x.id, x.name, x.sex, x.x, x.y, x.z);
}

int main()
{
	elemType x;
	// 1�������˳����ʼ��

	while (1)
	{
		char op[20];
		// 2�����������ַ���
		scanf("%s", op);
		// 3����� ����
		if (strcmp(op, "Insert") == 0)
		{
			printf("Insert:\n");
			// 3.1������ѧ����Ϣ
			inputElement(&x);
			printElement(x);
			// 3.2����ɹ�������Ϣ���������������ѧ����Ϣ��
			// ������� "Failed\n"
		}
		// 4��List
		if (strcmp(op, "List") == 0)
		{
			printf("List:\n");
			// 4.1���򣨺�����
			// 4.2�����������
		}
		// 5���޸�
		if (strcmp(op, "Change") == 0)
		{
			printf("Change:\n");
			// 5.1����ѧ����Ϣ
			// 5.2����޸ĳɹ����������������ѧ����Ϣ
			// ������� Failed
		}
		// 6��ɾ��ѧ����Ϣ
		if (strcmp(op, "Delete") == 0)
		{
			printf("Delete:\n");
			// 6.1����ѧ��
			// 6.2����ɹ�ɾ������������deleted
			// ���� Failed
		}
		// 7�����ң�
		if (strcmp(op, "Find") == 0)
		{
			printf("Find:\n");
			// ����ѧ��
			// ������ҳɹ��������������ѧ����Ϣ���������Failed
		}
		if (strcmp(op, "Quit") == 0)
		{
			printf("Good bye!");
			break;
		}
	}

	return 0;
}

/**************************************
���ܣ�
�β�:
����ֵ��
���ڣ�
�汾��
����:
***************************************/

/**************************************
��������Ŀ��ѧ����Ϣ����ϵͳ
Ҫ�����ݽṹ�����������������ú���
1. �������ѧ����Ϣ
2. ��������
3. ����Ĳ�����
4. ����ı�������ӡ
5. ɾ�����
6. ���ҽ��
7. �޸Ľ��
8. ����
9. ��������elemType��ֵ
****************************************/