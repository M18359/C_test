#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int* p;
	*p = 10;

	return 0;
}

//
////水仙花
//int main()
//{
//	int n = 0;//x xxxx+xx xxx+xxx xx+xxxx x
//	for (n = 10000; n < 100000; n++)
//	{
//		/*if (n == (n % 10) * (n / 10) + (n % 100) * (n / 100) +
//			(n % 1000) * (n / 1000) + (n % 10000) * (n / 10000))
//			printf("%d\n", n);*/
//		int i = 0;
//		int sum = 0;
//		for (i = 1; i <= 4; i++)
//		{
//			int m = pow(10, i);
//			sum = sum + (n / m) * (n % m);
//		}
//		if (n == sum)
//			printf("%d ", n);
//	}
//	return 0;
//}


//判断是不是字母
//int main()
//{
//	char i = 0;
//	while (scanf("%c", &i) == 1)
//	{
//		if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))//isalpha(i)
//		{
//			printf("%c is a alphabet\n", i);
//		}
//		else
//		{
//			printf("%c is not a alphabet\n", i);
//		}
//		getchar();
//	}
//	return 0;
//}


//字母大小写转换
//int main()
//{
//	while (1)
//	{
//		char i = 0;
//		scanf("%c", &i);
//		if (i >= 65 && i <= 90)
//			printf("%c\n", i + 32);
//		if (i >= 97 && i <= 122)
//			printf("%c\n", i - 32);
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	//scanf返回成功读到的数据的个数，读取失败返回EOF
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch + 32);
//		getchar();//处理scanf后的\n
//	}
//	return 0;
//}
#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	//scanf返回成功读到的数据的个数，读取失败返回EOF
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if(isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int arr[50] = {0};
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//接受要删除的值
//	int del = 0;
//	scanf("%d", &del);
//	//删除
//	//i遍历一遍，当arr[i]!=del时存放入arr[j]；当相等时i加一j不变
//	int j = 0;//作为下标锁定的位置
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	//j放置了新存放的个数
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////走台阶，每次走1或2，共n个台阶
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n >= 1 && n <= 30)
//		{
//			printf("%d",fib(n));
//			break;
//		}
//		else
//		{
//			printf("台阶位数不正确，请重新输入\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101--5
//	//00000101--a
//	char b = 126;
//	//00000000000000000000000001111110--126
//	//01111110--b
//	char c = a + b;
//	//a+b   ->加法计算需要整形提升
//	//00000000000000000000000000000101
//	//00000000000000000000000001111110
//	//00000000000000000000000010000011-->加后结果
//	//10000011--c
//
//	printf("%d", c);//整形打印，需对c整形提升--按第一位符号位补
//	//11111111111111111111111110000011--c补码
//	//11111111111111111111111110000010--c反码
//	//10000000000000000000000001111101--c原码--->1 4 8 16 32 64-->c=-125
//	return 0;
//}
//struct Stu
//{
//	char name[20] ;
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ps)
//{
//	strcpy((*ps).name , "zhangsan");
//	(*ps).age = 20;
//	(*ps).score = 100.0;
//}
//void set_stu(struct Stu* ps)
//{
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}

//00000000000000000000000000001101   -->1111
//00000000000000000000000000000010  |<--  <<1
//00000000000000000000000000001111
//00000000000000000000000000001101   -->11101
//00000000000000000000000000010000

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//求一个整形存储在内存中的二进制中1的个数
//int main()
//{
//	//00000000000000000000000000001111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001-->1
//	//00000000000000000000000000000001  a>>1
//	//00000000000000000000000000000001-->1
//	int a = 15;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < sizeof(a)*8; i++)
//	{
//		count = count + (a >> i & 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("qian:a=%d b=%d\n", a, b);
//	a = a ^ b;//a=3^5
//	b = a ^ b;//3^5^5---b=3
//	a = a ^ b;//3^5^3---a=5
//	printf("hou:a=%d b=%d\n", a,b);
//
//	return 0;
//}