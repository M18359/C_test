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
//	char* arr1[5] = { 0 };//ָ������
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
//	print2(arr,3,4);//��ά������������ʾһ�еĵ�ַ,��һ��һά����ĵ�ַ
//	return 0;
//}

//����ָ����;
//дһ��������
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
////ͨ������ָ������ಿ���в�ͬ����������
//void calc(int(*pf)(int, int))
//{
//	
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������");
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
//		printf("��ѡ��>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("������������������\n");
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


//����ָ������Ľ�������
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
//ͨ������ָ������ಿ���в�ͬ����������
void calc(int(*pf)(int, int))
{
	
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������������������");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	//����ָ�������ź�������������������������
	int (*pArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
		}
		else if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			printf("������������������>");
			scanf("%d %d", &x, &y);
			int ret=pArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("�����������������룺\n");
		}
	} while (input);

	return;
}