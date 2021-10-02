// 8_step_Factorial.cpp : 하노이탑 이동 순서
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int cnt = 0;

void hanoi(int in, int out, int stone, int len) {

    if (len == 0) {

        }
    else {
        hanoi(in, stone, out, len - 1);
        printf("%d %d\n", in, out);
        hanoi(stone, out, in, len - 1);
    }
}

void print_hanoi(int in, int out, int stone, int len) {

    if (len == 0) {

    }
    else {
        print_hanoi(in, stone, out, len - 1);
        print_hanoi(stone, out, in, len - 1);
        cnt += 1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_hanoi(1, 3, 2, n);
    printf("%d\n", cnt);
    hanoi(1, 3, 2, n);
    
}

//1
//1  3
//2
//1   2
//1   3
//2   3