#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <math.h>


//����ˮ����
int main()
{
	int money = 0;
	scanf("%d", &money);
	int empty = 0;
	int total = money;
	empty = money;
	//�û�
	while (empty >=2)
	{
		total += empty / 2;
		empty -= empty / 2;

	}
	printf("%d", total);
	return 0;
}


//��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//�ϰ벿��line/2+1
//	int i = 0;//��
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
//	//�°벿��line/2
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

//��ӡˮ�ɻ���
//int main()
//{
//	int n = 0;
//	for (n = 0; n < 100001; n++)
//	{
//		int s = 0;
//		int tmp = n;
//		//��ȷ���м�λ��-->s
//		while (tmp)//123  12  1 
//		{
//			s++;
//			tmp /= 10;
//		}
//		//�ж��Ƿ�Ϊ
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

//a+aa+aaa+aaaa+aaaaaǰn��֮��
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