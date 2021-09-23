#include <stdio.h>

// N번 반복할때, 첫번째는 별 하나 두번째는 별 두개,, 

int main(void)
{
	int i , N , X ;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		
		for(X=1; X<=i; X++){
			
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
