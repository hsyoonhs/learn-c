#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	printf("�� �ڸ� ������ �Է��ϼ��� (10 ~ 99) ==> ");
	scanf("%d", &a);
	printf("%04d\t%04d\t\"%04d\"\t\'%04d\'\n\n", a, a, a, a);

	// ������
	/*
	 * short (2 ����Ʈ (16 ��Ʈ))
	 * int (4 ����Ʈ (32 ��Ʈ))
	 * unsigned int (4 ����Ʈ)
	 */

	// �Ǽ���
	/*
	 * float
	 * asdf
	 * asdf
	 */

	char b[10] = "012345678\0";
	printf("%s \n", b);
}