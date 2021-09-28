#include <stdio.h>

int main(){
	
	int arry[]={0};
	int i, n;
	int x;
	int rest;
	int result;
	int count = 0 ; 
	int j;
	scanf("%d", &n);
	
	for(i=0; i<=n, i++){
	
		
		scanf("%d", &x);
		rest = x % 42 ;
		arry[i] = rest; // arry 열에 rest를 집어넣는다 맞냐? 
	}
		for(i=0; i<=n; i++){               //해야할건 각 배열의 숫자들이 중복이 되는지 안되는지 따져야함. 
		
		
		
		for(j=0; j<i; j++){
			
			if (arry[i] == arry[j]){
				count++;
			}
			if (count == 0){
				result++;
			}
		}
		
		
	}
	
	




    return 0;
 
}


