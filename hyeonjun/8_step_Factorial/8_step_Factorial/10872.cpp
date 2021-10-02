// 8_step_Factorial.cpp : 팩토리얼
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int factorial(int n) {
    int answer = 1;
    for (int i = 1; i < n + 1; i++)
        answer *= i;
    return answer;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("1");
    else
        printf("%d", factorial(n));
}
