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
////����ֵ����Ϊchar*  ��Ϊ��ʵ�ֺ���������ʽ���ʣ���Ϊ���������Ĳ���
////char* ���ص�Ӧ����dest����ʼ��ַ
//char* my_strcpy(char* dest,const char* str)//��ֹ���뷴
//{
//	char* ret = dest;
//	//�϶�str��Ϊ��
//	assert(str != NULL);
//	assert(dest != NULL);
//
//
//	while (*dest++=*str++)//\0 ASC����0
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