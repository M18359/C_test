#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


//��AB��С������
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
		i = a;
	else
		i = b;
	
	while ((i % a != 0)||(i%b!=0))
	{
		i++;
	}
	printf("%d",i );
	return 0;
}