
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> //문자열 반복
#include <string.h>

void test1() {
	int cnt;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		char inp[20];

		int count;
		scanf("%d %s", &count, inp);
		int len = strlen(inp);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < count; k++) {
				printf("%c", inp[j]);
			}
		}
	}
}

int main()
{
	test1();
	return 0;
}
