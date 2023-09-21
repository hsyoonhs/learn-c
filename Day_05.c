#include <stdio.h>

void main()
{
	printf("작성자 : 나\n");

	printf("%6d\n%06d\n", 123, 123);
	printf("%6.1f\\\\%7.3f\n", 123.45, 123.45);
	printf("%s, %s\n", "형식지정자", "예제");
}
