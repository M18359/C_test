#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>
#include <string.h>

//字符串倒置 i like beijing.    beijing. like i
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp=*right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
int main()
{
	//先把整个逆序
	char str[101] = { 0 };
	gets(str);
	int len = strlen(str);
	reverse(str, str + len - 1);
	//把每个单词逆序
	char* start=str;
	char* end=start;
	while (*start)
	{
		while (*end != ' '&& *end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if(*end!='\0')
			end++;
		start = end;
	}
	
	printf("%s", str);
	
	return 0;
}
//求AB最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	/*if (a > b)
//		i = a;
//	else
//		i = b;*/
//	i = a > b ? a : b;
//	while ((i % a != 0)||(i%b!=0))
//	{
//		i++;
//	}
//	printf("%d",i );
//	return 0;
//}