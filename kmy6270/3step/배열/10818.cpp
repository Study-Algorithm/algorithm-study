#include <stdio.h>

int main(){
	
	int i, N, R, min=0, max=0 ;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		
		scanf("%d", &R);
		if(R > max){
			max = R;
		}
		if(R < min){
			min = R;
		}
	}
	
	printf("%d %d", min, max);
	
	return 0;
}
