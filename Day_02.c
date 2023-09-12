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
	printf("d의 값: ");
	scanf("%d", &d);
	printf("입력된 d의 값은 %d입니다.\n", d);

	if (d > 10)
		printf("d의 값은 10보다 큽니다.\n");
	if (d <= 10)
		printf("d의 값은 10보다 작거나 같습니다.\n");
}
