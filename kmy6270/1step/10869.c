#include <stdio.h>

int main(void)
{
	
	int A , B , res;
	
	scanf("%d%d", &A , &B);
	
	res = A + B;
	printf("&d", res );
	
	
	res = A - B;
	printf("%d", res);
	
	
	res = A * B;
	printf("%d", res);
	

	res = A / B;
	printf("%d" , res);
	
	
	res = A % B;
	printf("%d" , res);
	
	return 0;
}
