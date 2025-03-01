#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	// 1、链表或顺序表初始化

	while (1)
	{
		char op[20];
		// 2、读入命令字符串
		scanf("%s", op);
		// 3、如果 插入
		if (strcpy(op, "Insert") == 0)
		{
			printf("Insert:\n");
			// 3.1、输入学生信息
			// inputElement(&x);
			// 3.2如果成功插入信息（函数），则输出学生信息，
			// 否则，输出 "Failed\n"
		}
		// 4、List
		if (strcpy(op, "List") == 0)
		{
			printf("List:\n");
			// 4.1排序（函数）
			// 4.2输出（函数）
		}
		// 5、修改
		if (strcpy(op, "Change") == 0)
		{
			printf("Change:\n");
			// 5.1输入学生信息
			// 5.2如果修改成功（函数），则输出学生信息
			// 否则输出 Failed
		}
		// 6、删除学生信息
		if (strcpy(op, "Delete") == 0)
		{
			printf("Delete:\n");
			// 6.1输入学号
			// 6.2如果成功删除（函数）则deleted
			// 否则 Failed
		}
		// 7、查找，
		if (strcpy(op, "Find") == 0)
		{
			printf("Find:\n");
			// 输入学号
			// 如果查找成功（函数），输出学生信息，否则，输出Failed
		}
		if (strcpy(op, "Quit") == 0)
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