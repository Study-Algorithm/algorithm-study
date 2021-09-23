//n을 입력받는다
//1+2+ ... +n 의 합을 구해야 한다. 어떻게할래
// n = 5 -> 1+2+3+4+5 
// n = 8 -> 1+2+3+4+5+6+7+8
// n항까지의 합 n(n+1)/2를 쓰면 편하겠지만 그러면 for 문을 쓸 필요가 없다. 

#include <stdio.h> 

int main(void)
{
	int n , i ; 
	int sum = 0;
	
	scanf("%d", &n);
	for(i=1; i <= n; i++){
		sum = sum + i;
		
		
	}

		printf("%d" , sum);
	return 0;
 } 
