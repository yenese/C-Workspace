#include <stdio.h>


int main()
{
	int number;
	int result; //daha büyük sayıları elde etmek için long long kullanabiliriz.
	
	result = 1;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&number);
	
	while(number >= 1)
	{	
		result *= number;
		number -= 1;
	}
	
	printf("Sayinin faktoriyeli : %d",result);
	
	return 0;
	
}
