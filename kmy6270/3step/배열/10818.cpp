#include <stdio.h>

int main(){
	
	int i, N, R[1000005], min, max;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		
		scanf("%d", &R[i]);
		
	}
	min=R[1];
	max=R[1];

	for(i=2;i<=N;i++)
	{
		if(R[i] > max){
			max = R[i];
		}
		if(R[i] < min){
			min = R[i];
		}
	}
	
	printf("%d %d", min, max);
	
	return 0;
}
