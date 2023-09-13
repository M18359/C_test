#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#include <iostream>
#include <string.h>
//using namespace std;

int main()
{
	char str1[] = "ijkabcdefg";
	char str2[] = "cde";
	char* p1 = strstr(str1, str2);
	//cout << p1 << endl;                    //输出str2在str1中第一次出现的位置开始以后的所有字符
	//cout << (p1 - str1) << endl;           //输出str2在str1中第一次出现的位置
	printf("%p\n", p1-str1);
	char str3[] = "abcdefgdas";
	char str4[] = "efg";
	char* p2 = strstr(str3, str4);

	printf("%p", p2 - str3);

	
	return 0;
}


//1!+2!+...+n!
//int main()
//{
//	//1 2 6 24 120
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		/*for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}*/
//		ret *= i;
//		sum += ret;
//	}
//	//计算n!
//	
//	printf("%d\n", sum);
//	return 0;
//}


//void test(int a[])
//{
//	//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}

//三角形判断
//int is_angle(int a, int b, int c)
//{
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) == 3)
//	{
//		if (is_angle(a,b,c) == 1)
//		{
//			if ((a == b) && (a == c))
//			{
//				printf("是等边三角形\n");
//			}
//			else if (((a == b) && (a != c)) || ((a == c) && (a != b))
//				|| ((b == c) && (b != a)))
//			{
//				printf("是等腰三角形\n");
//			}
//			else
//			{
//				printf("是普通三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//
//	}
//	return 0;
//}


//int leap_year(int y)
//{
//	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((leap_year(y) == 1) && m == 2)
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == (n - 1)))
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}
//打印整数二进制数的偶数位和奇数位
//int print_ou_ji(int n)
//{
//	//1101
//	int i = 0;
//	//奇数位
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	printf("\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_ou_ji(n);
//	return 0;
//}


//两个整形二进制位中不同位的个数
//int num_of_diff(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))//每位拿出来比较
//			count++;
//	}
//	return count;
//}
//int num_of_diff(int m,int n)
//{
//	//1100         1100
//	//1011         1010
//	//0111         1000
//	int i = m ^ n;//异或操作
//	//统计i中有几个1
//	int count = 0;
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int num=num_of_diff(m, n);
//	printf("%d", num);
//	return 0;
//}


//写一个函数返回二进制中1的个数
//int numof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//每执行一次，会使n最右侧的1消失
//		count++;
//	}
//	return count;
//}
// 1101
// 1100
// 1100
// 1010
// 1000
// 0100
// 0000
//int numof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int numof1(unsigned int n)//unsigned int处理复数
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",numof1(n));
//	return 0;
//}
//a    b    c   
//8    7    8      
//9    23

//struct Peo
//{
//	char name[20];
//	char sex[5];
//	char tele[12];
//};
//
//void print1(struct Peo p)
//{
//	printf("%s %s %s\n", p.name, p.sex, p.tele);
//}
//void print2(struct Peo* pp)
//{
//	printf("%s %s %s\n", pp->name, pp->sex, pp->tele);
//}
//int main()
//{
//	struct Peo p1 = { "张三","男","123098888"};
//	print1(p1);
//	struct Peo p2 = { "李四","女","098900099" };
//	print2(&p2);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\n')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	int count = 0;
//	char* start = str;
//	while (*str != '\n')
//	{
//		count++;
//		str++;
//	}
//	return (str - start);
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}