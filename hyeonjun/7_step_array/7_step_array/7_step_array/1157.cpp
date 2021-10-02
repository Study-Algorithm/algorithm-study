// 7_step_array.cpp : //단어 공부
//ASCI에서 A=65 Z=90 a=97 z=122
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

void test1() {
	int alp[27] = { 0,0,0,0,0,0,0,0,0,0,
					 0,0,0,0,0,0,0,0,0,0,
					 0, 0,0,0,0,0,0 };
	char word[1000000];
	scanf("%s", word);
	int len = strlen(word);
	for (int i = 0; i < len; i++) {
		int num=26;
		if ((word[i] > 64) and (word[i] < 91))
			num = (int)word[i] - 65;
		if ((word[i] > 96) and (word[i] < 123))
			num = (int)word[i] - 97;
		alp[num] += 1;
	}
	
	int max = 0, store=27;
	int stack = 0;
	for (int i = 0; i < 26; i++) {//max값을 max에 그리고 alp[i]의 i는 store에 저장
		if (alp[i] > max) {
			max = alp[i];
			store = i;
		}
			

	}
	for (int i = 0; i < 26; i++) {
		if (max == alp[i])
			stack += 1;
	}
	if (stack == 1)
		printf("%c\n", store + 65);
	else
		printf("?\n");
}

int main()
{
	test1();
}
