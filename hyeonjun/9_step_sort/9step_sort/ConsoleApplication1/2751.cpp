#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define max 9

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
	int cnt;
	int arr[1000000];
	scanf("%d", &cnt);

	for (int a = 0; a < cnt; a++)
	{
		scanf("%d", &arr[a]);
	}

	qsort(arr, cnt, sizeof(int), sort);

	for (int a = 0; a < cnt; a++)
	{
		printf("%d\n", arr[a]);
	}
}