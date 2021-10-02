// 7_step_array.cpp : //¾ËÆÄºª Ã£±â.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void test1() {
	char alp[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
					 -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
					 -1,-1,-1,-1,-1,-1 };
	char inp[100];
	scanf("%s", inp);
	int len = strlen(inp);
	
	for (int i = len-1; i > -1; i--) {
		int num=(int)inp[i] - 97;
		alp[num] = i;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alp[i]);
	}
}

int main()
{
	test1();
	return 0;
}
