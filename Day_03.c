#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, result;

	printf("작성자 : 나\n\n");

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d + %d = %d\n", a, b, result);
}