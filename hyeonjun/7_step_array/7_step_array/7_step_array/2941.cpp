// 7_step_array.cpp : 다이얼
//ASCI에서 " "=32
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>



void test1() {
	char a[102];
	fgets(a, 102, stdin);
	int len = strlen(a);
	int result=0;
	for (int i = 0; i < len-1;) {
		if (a[i] == 'c') {
			i++;
			if (a[i] == '=') {
				result++;
				i++;
			}

			else if (a[i] == '-'  ) {
				result++;
				i++;
			}
			else
				result++;
		}
		else if (a[i] == 'd') {
			i++;
			if (a[i] == 'z') {
				i++;
				if (a[i] == '=') {
					result++;
					i++;
				}
				else
					result += 2;
			}
			else if (a[i] == '-') {
				result++;
				i++;
			}
			else
				result++;
		}
		else if (a[i] == 'l') {
			i++;
			if (a[i] == 'j') {
				i++;
				result++;
			}
			else
				result++;
		}
		else if (a[i] == 'n') {
			i++;
			if (a[i] == 'j') {
				i++;
				result++;
			}
			else
				result++;
		}
		else if (a[i] == 's') {
			i++;
			if (a[i] == '=') {
				i++;
				result++;
			}
			else
				result++;
		}
		else if (a[i] == 'z') {
			i++;
			if (a[i] == '=') {
				i++;
				result++;
			}
			else
				result++;
		}
		else {
			i++;
			result++;
		}
		
	}
	printf("%d\n", result);

}

int main()
{
	test1();
}
