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

void print1(int arr[3][4], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[4], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][4] = { 1,1,1,1,2,2,2,2,3,3,3,3 };
	print1(arr,3,4);
	print2(arr,3,4);//二维数组数组名表示一行的地址,是一个一维数组的地址
	return 0;
}