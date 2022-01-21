#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
		count[number + 4000]++;
	}
	double add = 0;
	int arr[1000000];
	int a = 0;

	int max = 0;
	int result = 0;
	for (i = 0; i < 10000; i++)
	{
		if (count[i] > max)
		{
			result = i - 4000;
			max = count[i];
		}
	}
	int b = 0;
	for (i = 0; i < 10000; i++)
	{
		if (max == count[i])
		{
			b++;
			if (b == 2)
			{
				result = i - 4000;
			}
		}
	}
	for (i = 0; i < 10000; i++)
	{
		while (count[i] != 0)
		{
			add += i - 4000;
			arr[a] = (i - 4000);
			a++;
			count[i]--;

		}
	}

	add = add / cnt;

	if (add > 0)
		add = add + 0.5;
	else
		add -= 0.5;

	printf("%d\n", (int)add);
	printf("%d\n", arr[cnt / 2]);
	printf("%d\n", result);
	printf("%d\n", arr[cnt - 1] - arr[0]);
}