#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5;
	b = 3;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	int d;
	printf("d�� ��: ");
	scanf("%d", &d);
	printf("�Էµ� d�� ���� %d�Դϴ�.\n", d);

	if (d > 10)
		printf("d�� ���� 10���� Ů�ϴ�.\n");
	if (d <= 10)
		printf("d�� ���� 10���� �۰ų� �����ϴ�.\n");
}
