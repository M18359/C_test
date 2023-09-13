#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

//汉诺塔问题
//移动过程
void move(char pos1, char pos2)
{
	printf(" %c->%c ", pos1, pos2);
}
//n-盘子个数  pos1-起始位置 pos2-中转位置 pos3-目标位置
void Hannuo(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hannuo(n - 1, pos1,pos3, pos2);
		move(pos1, pos3);
		Hannuo(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	Hannuo(3,'A','B','C');
	return 0;
}


//求第N个斐波那契数列
//递归--太浪费
//int Fib(int n)
//{
//	while (n <= 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//迭代
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int a = 1;    //1 1 2 3 5 8 13 21 34 55
//		int b = 1;    //    a b c
//		int c = 0;
//		int i = 0;
//		for (i = 0; i < n-2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}


//int my_strlen(char* str)
//{
//	//递归归方法--大事化小
//	// my_strlen("bit")-> 1+my_strlen("it")->1+1+my_strlen("t")->1+1+1+my_strlen("")
//	//求字符串长度
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//传入数组首元素的地址
//	printf("%d\n", len);
//	return 0;
//}


////递归
////将键盘输入的数字按顺序打印出来
//void print(int n)
//{
//	//print(1234)
//	//print(123) 4 -> print(12) 3 4 -> print(1) 2 3 4
//	if (n > 9)//是两位数及以上
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//1
//int Add(int, int);
//2
//int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



//int Add(int* x)
//{
//	*x += 1;
//	return *x;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}


////二分查找
////找到返回下标，找不到返回-1
//                  //实际上arr是指针
//int binary_search(int arr[], int x,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);arr是指针，不能进行操作
//	int right = sz - 1;
//	int left = 0;
//	int mid = 0;
//	while (left <= right)
//	{ 
//		mid = (right + left) / 2;
//		if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 17;
//	int ret = binary_search(arr,k,sz);//arr传过去的是首元素的地址
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("找到了下标是：%d", ret);
//	return 0;
//}


////判断一年是不是闰年
////判断是否为闰年
////1.能被4整除，不能被100整除
////2.能被400整除
//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//	{
//		return 1;
//	}
//	else if (n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


////判断是否为素数
////素数返回1，不是素数返回0
//int is_prim(int x)
//{
//	int y = 2;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			//break;
//			return 0;
//		}
//	}
//	/*if (y >= sqrt(x))
//		return 1;*/
//	return 1;
//}
//int main()
//{
//	//100-200之间素数
//	int i = 100;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prim(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
////函数的定义
//int Max(int x, int y)
//{
//	if (x >= y)
//		;
//	else
//		x = y;
//	return x;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max =Max(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, '$', 5);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "simple";
//	char arr2[20]="###########";
//	//             simple\0###
//	//打印时遇到\0字符串结束标志就不继续打印了
//	strcpy(arr2, arr1);
//	printf("arr1=%s arr2=%s\n", arr1, arr2);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	return z = x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}