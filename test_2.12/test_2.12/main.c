#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

//��ŵ������
//�ƶ�����
void move(char pos1, char pos2)
{
	printf(" %c->%c ", pos1, pos2);
}
//n-���Ӹ���  pos1-��ʼλ�� pos2-��תλ�� pos3-Ŀ��λ��
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


//���N��쳲���������
//�ݹ�--̫�˷�
//int Fib(int n)
//{
//	while (n <= 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//����
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
//	//�ݹ�鷽��--���»�С
//	// my_strlen("bit")-> 1+my_strlen("it")->1+1+my_strlen("t")->1+1+1+my_strlen("")
//	//���ַ�������
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//����������Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}


////�ݹ�
////��������������ְ�˳���ӡ����
//void print(int n)
//{
//	//print(1234)
//	//print(123) 4 -> print(12) 3 4 -> print(1) 2 3 4
//	if (n > 9)//����λ��������
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
//	//��������
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


////���ֲ���
////�ҵ������±꣬�Ҳ�������-1
//                  //ʵ����arr��ָ��
//int binary_search(int arr[], int x,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);arr��ָ�룬���ܽ��в���
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
//	int ret = binary_search(arr,k,sz);//arr����ȥ������Ԫ�صĵ�ַ
//	if (-1 == ret)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ����±��ǣ�%d", ret);
//	return 0;
//}


////�ж�һ���ǲ�������
////�ж��Ƿ�Ϊ����
////1.�ܱ�4���������ܱ�100����
////2.�ܱ�400����
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


////�ж��Ƿ�Ϊ����
////��������1��������������0
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
//	//100-200֮������
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
////�����Ķ���
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
//	//������ʹ��
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
//	//��ӡʱ����\0�ַ���������־�Ͳ�������ӡ��
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