#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void print_data(int* data, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%d\n", data[i]);
	}
}

int main()
{
	int cnt;
	scanf("%d", &cnt);
	int i, j;
	int data[1000] = { 0x0, };
	int min, key, temp;
	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &data[i]);
	}
	for (i = 0; i < cnt - 1; i++)
	{
		min = data[i];
		key = i;
		for (j = i + 1; j < cnt; j++)
		{
			if (min > data[j])
			{
				key = j;
				min = data[j];
			}
		}
		temp = data[i];
		data[i] = data[key];
		data[key] = temp;
	}
	print_data(data, cnt);

}