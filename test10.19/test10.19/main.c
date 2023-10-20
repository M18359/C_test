#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>
#include <errno.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	//判断打开是否成果，不成功输出原因
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//操作文件
//	//放入字符
//	//fputc('a', pf);
//	int i = 'a';
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i,pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	//判断打开是否成果，不成功输出原因
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//操作文件
//	//读取单个字符
//	//int ch = fgetc(pf);
//	//printf("%c ", ch);
//	//读取部分字符
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	//判断打开是否成果，不成功输出原因
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//操作文件
//	//写入一行字符
//	fputs("ni hao china", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	//判断打开是否成果，不成功输出原因
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//操作文件
//	//读取一行字符
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",23,90.2f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//		perror("fopen");
//	//输入结构体
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		perror("fopen");
//	//读取结构体
//	fscanf(pf, "%s %d %f", &(s.name), &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { 0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//		perror("fopen");
//	////二进制形式写入
//	//fwrite(&s, sizeof(s), 1, pf);
//	//二进制形式读出
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { "zhangsan",24,50.2 };
	struct Stu tmp = { 0 };
	char buf[100];
	//把s中格式化数据转化为字符串放到buf中
	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	//"zhangsan 24 50.200001"
	printf("字符串:%s\n", buf);
	//从buf中获取一个格式化的数据到tmp中
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("格式化：%s %d %f\n", tmp.name, tmp.age, tmp.score);
	return 0;
}