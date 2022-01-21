#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int sort(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
	{
		return 1;
	}
	else if (*(int*)a == *(int*)b)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int main()
{
	long a;
	scanf("%d", &a);
	int arr[11];
	int b;
	for (b = 0; b < 11; b++)
	{
		arr[b] = 0;
	}
	int cnt = 0;
	b = 0;
	while (a >= 10)
	{
		arr[b] = a % 10;
		a = a / 10;
		cnt++;
		b++;
	}
	arr[b] = a;
	cnt++;

	qsort(arr, cnt, sizeof(int), sort);
	for (b = cnt - 1; b >= 0; b--)
	{
		printf("%d", arr[b]);
	}

	return 0;
}