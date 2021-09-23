// 정수  0<=A<=99
// A가 두자릿수라면, A%10=b , A/10=a , a+b = x , x % 10 = y, a*10 + y 가 새로운 수.
// 새로운수를 D라고 정의하고 A=D이라면 루프를 종료한다. 반복 횟수를 출력해야한다. 


#include <stdio.h>

int main(void){
	
	int A ;
	int i=0 ;
	
	scanf("%d", &A);
	while(i>=0){
		
		int b = A%10;
		int a = A/10;
		int x = a+b;
		int y = x % 10;
		int D = a*10+ y;
	    i++;
	    
		if(A=D){
			printf("%d", i);
			break;
			
		} 
	}
	
	return 0;
	
	
} 
