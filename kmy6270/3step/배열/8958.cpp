#include <stdio.h>

int main(void){
	
	char arr[80]={};
	
	int i, j, k,  m, n;
	int l = 80;
	int count;
	int sum = 0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		
		for(k=0; k<l; k++){
			
			scanf("%s", arr);
			if(arr[80]='O'){               	//char 형에 O가 입력되면  
			
				count++;          			//카운트는 올라가고    		
				sum = sum + count;	 		//합계는 누적되어진다. 
			}
			else if(arr[80]='X'){				//char 형에 X가 입력되면 
				
				count=0;					//카운트는 0으로 초기화 된다. 
				
			}
			else{
				printf("%d \n", sum); 		//다른수가 입력되면 합계가 출력되고  
				break;						//종료된다. 
			}
			
			
		}
		
		
	}
	
	

	
	
	return 0; 
}
