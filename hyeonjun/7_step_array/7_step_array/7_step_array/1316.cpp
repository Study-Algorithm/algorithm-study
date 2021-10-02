// 7_step_array.cpp : //그룹 단어 체커.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void Str_test() {
	int cnt;
	scanf("%d", &cnt);
	int answer = 0;
	for (int i = 0; i < cnt; i++) {
		char group[100];
		scanf("%s", group);
		int len = strlen(group);
		int answer_2 = 1;
		for (int j = 0; j < len-1; j++) {
			while (group[j] == group[j + 1]) {
				j++;
			}
			for (int k = j+1; k < len; k++) {//j부터 len까지 같으면 answer_2=0
				if (group[j] == group[k])
					answer_2 = 0;
			}
			
		}
		if (answer_2 == 1)
			answer += 1;
	}
	printf("%d", answer);
};

int main()
{
	Str_test();
	return 0;
}
