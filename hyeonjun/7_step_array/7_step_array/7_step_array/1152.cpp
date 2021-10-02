// 7_step_array.cpp : 단어 개수
//ASCI에서 " "=32
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>


int test1() {
	char a[1000000];
	fgets(a, 1000000, stdin);
	int len = strlen(a);

	int cnt = 0;
	int i = 0;
	int button = 0;
	for (int j = 0; j < len-1; j++) {
		if (a[j] != 32) {
			button = 1;
		}
			
	}
	
	if (button == 0) {
		printf("0");
		return 0;
	}
	while (a[i] == 32) {
		i++;
	}
	for (; i < len; i++) {	
		cnt++;
		while (a[i] != 32) {
			i++;
		}
		while (a[i] == 32) {
			i++;
		}			
	}
	printf("%d", cnt);
	return 0;
}

int main()
{
	test1();
}
