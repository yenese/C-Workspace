#include <stdio.h>

int main() 
{
	int number;
	int i;
	int result;
	
	i = 0;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&number);
	
	while(i<=9)
	{
		result = number * i;
		
		printf("%d * %d = %d \n",number,i,result);
		
		i++;
	}
	
	return 0;
   
}
