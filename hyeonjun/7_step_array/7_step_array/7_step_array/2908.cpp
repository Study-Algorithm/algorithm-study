// 7_step_array.cpp : »ó¼ö
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

void Return(char number[3]) {
	char* result = (char*)calloc(4, sizeof(char));
	
	result[0] = number[2];
	result[1] = number[1];
	result[2] = number[0];
	for (int i = 0; i < 3; i++) {
		number[i] = result[i];
	}
}

void Print(char number[3]) {
	for (int i = 0; i < 3; i++)
		printf("%c", number[i]);
}

void test1() {
	char a[3], b[3];
	
	scanf("%s %s", a, b);
	Return(a);
	Return(b);
	if (a[0] > b[0]) {
		Print(a);
	}
	else if (a[0] < b[0]) {
		Print(b);
	}
	else {
		if (a[1] > b[1]) {
			Print(a);
		}
		else if (a[1] < b[1]) {
			Print(b);
		}
		else {
			if (a[2] > b[2]) {
				Print(a);
			}
			else if (a[2] < b[2]) {
				Print(b);
			}
		}
	}
	
}

int main()
{
	test1();
}
