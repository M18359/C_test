#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	//�жϴ��Ƿ�ɹ������ɹ����ԭ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�����ļ�
//	//�����ַ�
//	//fputc('a', pf);
//	int i = 'a';
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i,pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	//�жϴ��Ƿ�ɹ������ɹ����ԭ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�����ļ�
//	//��ȡ�����ַ�
//	//int ch = fgetc(pf);
//	//printf("%c ", ch);
//	//��ȡ�����ַ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	//�жϴ��Ƿ�ɹ������ɹ����ԭ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�����ļ�
//	//д��һ���ַ�
//	fputs("ni hao china", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	//�жϴ��Ƿ�ɹ������ɹ����ԭ��
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//�����ļ�
//	//��ȡһ���ַ�
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//	//�ر��ļ�
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
//	//����ṹ��
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
//	//��ȡ�ṹ��
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
//	////��������ʽд��
//	//fwrite(&s, sizeof(s), 1, pf);
//	//��������ʽ����
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
	//��s�и�ʽ������ת��Ϊ�ַ����ŵ�buf��
	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	//"zhangsan 24 50.200001"
	printf("�ַ���:%s\n", buf);
	//��buf�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("��ʽ����%s %d %f\n", tmp.name, tmp.age, tmp.score);
	return 0;
}