#include <stdio.h>

int main(){
	
	int a, b, c;
	int sum;
	int rest;
	int X[10] = {};
	int i;
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a * b * c;
	
	while(sum > 0){
		rest = sum % 10;
		sum = sum / 10;
		int X[rest];
	}
	
	for(i=0; i<10; i++){
		printf("%d \n", X[i]);
	}
}
