#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "yes right";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
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