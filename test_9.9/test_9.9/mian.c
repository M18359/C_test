#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <math.h>


//喝汽水问题
int main()
{
	int money = 0;
	scanf("%d", &money);
	int empty = 0;
	int total = money;
	empty = money;
	//置换
	while (empty >=2)
	{
		total += empty / 2;
		empty -= empty / 2;

	}
	printf("%d", total);
	return 0;
}


//打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上半部分line/2+1
//	int i = 0;//行
//	for (i = 0; i < (line / 2 + 1); i++)
//	{
//		int j = 0;
//		for (j = 0; j < (line / 2 - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2 * i + 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分line/2
//	for (i = 0; i < line / 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < (i + 1); j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line/2-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印水仙花数
//int main()
//{
//	int n = 0;
//	for (n = 0; n < 100001; n++)
//	{
//		int s = 0;
//		int tmp = n;
//		//先确定有几位数-->s
//		while (tmp)//123  12  1 
//		{
//			s++;
//			tmp /= 10;
//		}
//		//判断是否为
//		int sum = 0;
//		tmp = n;
//		while (tmp)
//		{
//			sum += pow(tmp % 10,s);
//			tmp /= 10;
//		}
//		if (n == sum)
//			printf("%d ", n);
//
//	}
//	return 0;
//
//}

//a+aa+aaa+aaaa+aaaaa前n项之和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		//a    sum+ a0+a   sum+a00+aa
//		k += a * pow(10, i);
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "yes right";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


////返回值设置为char*  是为了实现后续可以链式访问，作为其他函数的参数
////char* 返回的应该是dest的起始地址
//char* my_strcpy(char* dest,const char* str)//防止输入反
//{
//	char* ret = dest;
//	//断定str不为空
//	assert(str != NULL);
//	assert(dest != NULL);
//
//
//	while (*dest++=*str++)//\0 ASC码是0
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxx";
//	char arr2[] = "hello world!";
//
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}