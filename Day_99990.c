#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역 변수
FILE* fp;
int data_len, cnt = 0;
int d[100];
char* file_name = "C:\\Users\\user\\Desktop\\231213\\data_file2.txt.txt";

void import_data()
{
	fp = fopen(file_name, "r");
	int i = 0;
	while (!feof(fp))
	{
		fscanf(fp, "%d", (d + i));
		i++;
	}
	data_len = i;
	fclose(fp);
}

void check_pattern()
{
	int i;
	for (i = 1; i < data_len; i++)
	{
		if (*(d + i - 1) == 1 && *(d + i) == 0)
			cnt++;
	}
}

void print_data()
{
	printf("비트 패턴 10의 횟수 = %d\n", cnt);
}

void main()
{
	import_data();
	check_pattern();
	print_data();
}
