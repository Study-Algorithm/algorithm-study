// 8_step_Factorial.cpp : º° Âï±â-10
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


void star(int i, int j) {
    if ((i % 3 == 1) & (j % 3 == 1))
        printf(" ");
    else if ((i >= 3) | (j >= 3)) {
        i /= 3;
        j /= 3;

        star(i, j);
    }
    else {
        printf("*");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            star(i, j);
        }
        printf("\n");
    }
}
