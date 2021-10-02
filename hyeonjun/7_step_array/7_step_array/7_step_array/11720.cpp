// 7_step_array.cpp : //숫자의 합.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void Str_test(){
	int cnt;
	scanf("%d", &cnt);
	char* arr;
	arr = (char*)malloc(cnt * sizeof(char));
	scanf("%s", arr);
	int sum = 0;
	for (int i = 0; i < cnt; i++) {
		sum += (arr[i] - 48);
	}
	printf("%d", sum);
	free(arr);
	
};

int main()
{
	Str_test();
	return 0;
}
