#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	// short 형식의 값 범위: -32768 ~ 32767
	short a = 30000;
	short b = 40000;
	printf("a = %d\n", a); // a = 30000 (정상)
	printf("b = %d\n", b); // b = -25536 (비정상)

	// unsigned int 형식의 값 범위: 0 ~ 2^32-1
	// unsigned short 형식의 값 범위: 0 ~ 65535
	unsigned int c = -100;
	unsigned short d = -30000;
	printf("c = %d\n", c); // c = -100 (겉보기에 괜찮지만 비정상)
	printf("d = %d\n", d); // d = 35536 (비정상)

	float e = 0.2222222222222222222222222f;
	double f = 0.2222222222222222222222222;
	float g = 22222.2222222222222222222222222f;
	double h = 22222.2222222222222222222222222;
	printf("e = %30.25f\n", e); // e =    0.2222222238779067993164062 (유효숫자 약 6~7개)
	printf("f = %30.25lf\n", f); // f =    0.2222222222222222098864108 (유효숫자 약 16~17개)
	printf("g = %30.25f\n", g); // g = 22222.2226562500000000000000000 (상동)
	printf("h = %30.25lf\n\n", h); // h = 22222.2222222222226264420896769 (상동)

	char i = 'A';
	printf("%c\n", i); // A
	printf("%d\n", i); // 65

	char j = 'a', k = j + 5, l = 90;
	printf("%c %c %c\n", j, k, l); // a f Z
	printf("%d %d %d\n\n", j, k, l); // 97 102 90

	char str[7]; // 6자 문자열 선언
	/* char str[7] = "Basic" (가능)
	 * str[0] = 'B'; (가능)
	 * str = "Basic" (불가능)
	 */
	strcpy(str, "Basic"); // 문자열 복사(할당)
	printf("str = %s\n", str);
	printf(
		"[0]: %c, [1]: %c, [2]: %c, [3]: %c, [4]: %c, [5]: %c, [6]: %c\n\n",
		str[0], str[1], str[2], str[3], str[4], str[5], str[6]
	);

	char m;
	printf("알파벳 한 개를 입력하세요 : ");
	scanf("%c", &m);
	if (m >= 'a' && m <= 'z')
	{
		printf("입력된 알파벳 %c는 소문자입니다.\n", m);
		printf("입력된 알파벳의 대문자는 %c입니다.\n\n", m - 32);
	}
	else if (m >= 'A' && m <= 'Z')
	{
		printf("입력된 알파벳 %c는 대문자입니다.\n", m);
		printf("입력된 알파벳의 소문자는 %c입니다.\n\n", m + 32);
	}
	else
	{
		printf("입력된 문자는 알파벳이 아닙니다.\n\n");
	}

	printf("(%d + %d) * %d = %d\n", 2, 3, 4, (2 + 3) * 4);
	printf("%d * %d / %d = %f\n", 2, 3, 4, (float)2 * 3 / 4);
	printf("%d / %d의 몫은 %d\n", 4, 3, 4 / 3);
	printf("%d / %d의 나머지는 %d\n\n", 4, 3, 4 % 3);

	int n = 10;
	printf("n++ ==> %d\n", n++); // n++ ==> 10 출력 (후 n은 11)
	printf("n-- ==> %d\n", n--); // n-- ==> 11 출력 (후 n은 10)
	printf("++n ==> %d\n", ++n); // (n은 11 후) ++n ==> 11 출력
	printf("--n ==> %d\n\n", --n); // (n은 10 후) --n ==> 10 출력

	int o = 100, p = 200;
	printf("%d\n", o == p); // 0
	printf("%d\n", o != p); // 1
	printf("%d\n", o > p); // 0
	printf("%d\n", o = p); // 200
}