// 7_step_array.cpp : 다이얼
//ASCI에서 " "=32
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>



void test1() {
	char a[15];
	gets_s(a);
	int len = strlen(a);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		
		int num = (int)a[i] - 62;
		printf("%d\n", num);
		if (num >= 21)
			num -= 1;
		num = num / 3 + 2;
		if (num == 11)
			num -= 1;
		sum += num;
	}
	printf("%d", sum);

}

int main()
{
	test1();
}
