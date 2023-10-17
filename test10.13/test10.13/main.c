#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//	const char* p1 = "abc";
//	const char* p2 = "abc";
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//			//printf("%d ", * parr[i] + j);
//			//*(p+i)-->p[i]
//			printf("%d ", parr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[5] = { 0 };
//	char(*p)[5] = &arr;
//
//	char* arr1[5] = { 0 };//指针数组
//	char* (*p1)[5] = &arr1;
//
//
//
//	return 0;
//}

//void print1(int arr[3][4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { 1,1,1,1,2,2,2,2,3,3,3,3 };
//	print1(arr,3,4);
//	print2(arr,3,4);//二维数组数组名表示一行的地址,是一个一维数组的地址
//	return 0;
//}

//函数指针用途
//写一个计算器
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1.add 2.sub******\n");
//	printf("*****3.mul 4.div******\n");
//	printf("*****   0.exit  ******\n");
//	printf("**********************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////通过函数指针把冗余部分中不同代码抽离出来
//void calc(int(*pf)(int, int))
//{
//	
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		
//
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//
//			break;
//		case 3:
//			calc(Mul);
//
//			break;
//		case 4:
//			calc(Div);
//
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入有误，请重新输入\n");
//
//			break;
//		}
//	} while (input);
//
//	return;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](9, 3);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//函数指针数组改进计算器
void menu()
{
	printf("**********************\n");
	printf("*****1.add 2.sub******\n");
	printf("*****3.mul 4.div******\n");
	printf("*****   0.exit  ******\n");
	printf("**********************\n");

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//通过函数指针把冗余部分中不同代码抽离出来
void calc(int(*pf)(int, int))
{
	
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数：");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	//函数指针数组存放函数名，方便增减计算器功能
	int (*pArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
		}
		else if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			int ret=pArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("输入有误，请重新输入：\n");
		}
	} while (input);

	return;
}