#include <stdio.h>

int main(void)
{
	// 0시0분~ 0시 44분과 나머지 시간을 나눈다.
	// 구간을 나누는 이유는  
	// 공통) 분이 44분 이하일 때 H-1을 해야한다. 그리고 분은 60-(45-H)로 나타내어 진다. 
	
	int H , M ;
	
	scanf("%d%d", &H , &M );
	
	if(H >= 1){
		
		int cH , cM ;
		
		if(M >= 45){
			cH == H ;
			cM = M - 45;
			printf("%d %d", cH , cM);
		}
		
		else{
			cH = H - 1 ;
			cM = 60 - (45 - M);
			printf("%d %d", cH , cM);
			
		}
		
		
	} 
	
	else if( H == 0){
		
		int cH , cM ;
		
		if(M >= 45){
			cH == H ; 
			cM = M - 45 ;
			printf("%d %d", cH , cM);
			}
		
		else{
			cH = 23 ;
			cM = 60 - ( 45 - M);
			printf("%d %d", cH , cM);
		}
	}
	
	return 0;
	
}
