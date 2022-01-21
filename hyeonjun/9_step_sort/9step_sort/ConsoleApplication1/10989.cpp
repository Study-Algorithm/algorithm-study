#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count[10000];
	int i;
	for (i = 0; i < 10000; i++)
	{
		count[i] = 0;
	}
	int cnt;
	int number;
	scanf("%d", &cnt);
	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &number);
		count[number - 1]++;
	}
	for (i = 0; i < 10000; i++)
	{
		while (count[i] != 0)
		{
			printf("%d\n", i + 1);
			count[i]--;
		}
	}
}