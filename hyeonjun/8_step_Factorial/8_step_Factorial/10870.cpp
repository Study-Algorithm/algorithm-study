// 8_step_Factorial.cpp : 피보나치 수 5
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int fibo(int n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else if (n == 0)
        return 0;
    return (fibo(n - 1) + fibo(n - 2));
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}
