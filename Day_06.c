#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	printf("두 자리 정수를 입력하세요 (10 ~ 99) ==> ");
	scanf("%d", &a);
	printf("%04d\t%04d\t\"%04d\"\t\'%04d\'\n\n", a, a, a, a);

	// 정수형
	/*
	 * short (2 바이트 (16 비트))
	 * int (4 바이트 (32 비트))
	 * unsigned int (4 바이트)
	 */

	// 실수형
	/*
	 * float
	 * asdf
	 * asdf
	 */

	char b[10] = "012345678\0"; // 마지막에 null 문자
	printf("%s \n", b);
}
