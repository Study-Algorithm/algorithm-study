// 테스트 케이스 갯수 T만큼 반복을 해야한다
// 반복문에서 A와 B를 입력 받는 구문을 만들어야 한다

#include <stdio.h>

int main(void)
{
	int T , t , A , B ;
	
	scanf("%d", &T);
	
	for(t = 1; t <= T; t++){
		scanf("%d%d", &A ,&B);
		printf("%d \n", A+B);
	}
	
	return 0;
 } 
