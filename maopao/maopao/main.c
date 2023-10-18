#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <search.h>
#include <string.h>
#include <mbstring.h>


//排成降序

//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;//假设数组是有序的，已经排好序
//	//趟数,需走n-1趟
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序过程
//		int j = 0;
//		//冒泡排序的对数会随着趟数改变
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 0;
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//使用q_sort快速排序--可以用来比较不同类型，通过修改函数指针内容
/* 
void qsort(
	void* base,//目标数组的开头。
	size_t num,//元素的数组大小
	size_t width,//以字节为单位的元素大小。
	int(* compare)(const void*, const void*)
);
*/

int cmp_int(const void* e1, const void* e2)
{
	/*if (*(int*)e1 < *(int*)e2)
		return 1;
	else if (*(int*)e1 > *(int*)e2)
		return -1;
	else
		return 0;*/
	return (*(int*)e2 - *(int*)e1);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{
	/*int strcmp(
		const char* string1,
		const char* string2
	);*/
	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
}
void test2()
{
	struct Stu s[] = { {"zhangsan",20},{"lisi",90}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

void test1()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//test1();//用qsort对整数降序
	test2();//用qsort排序结构体
	return 0;
}