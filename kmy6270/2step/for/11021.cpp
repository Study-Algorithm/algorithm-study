#include <stdio.h>

int main(void)

{
	int A , B , T , i ;
	
	scanf("%d" , &T);
	
	for(i=1; i <=T; i++){
		scanf("%d%d", &A, &B);
		
		printf("Case #%d: %d \n", i , A+B);
		
	}
	
	return 0;
}
