#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int b;

	printf("b의 값을 입력하세요 : ");
	scanf("%d", &b);

	if (b == 2)
		printf("b의 값은 2입니다.\n");
	else
		printf("b의 값은 2가 아닙니다.\n");
}