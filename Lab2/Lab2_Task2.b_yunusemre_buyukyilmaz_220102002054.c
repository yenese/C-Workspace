#include <stdio.h>


int main()
{
	int number;
	int i;
	long long result; 
	
	result = 1;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&number);
	
		
	for(i = 1; i <= number; i++) 
	{
		result *= i;
		
	}

	printf("Sayinin faktoriyeli = %lld",result);
	
	return 0;
}
