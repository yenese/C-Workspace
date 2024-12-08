#include<stdio.h>

int main()
{
	int a = 5;   // 00000101
	int b = 8;   // 00001000
	int c = 7;   // 00000111
	
	int cons = 1; // 00000001
	
	int number;
	printf("Bir sayi giriniz : ");
	scanf("%d", &number);
	
	if((number ^ cons) - 1 == number)
	{
		printf("Cift sayidir.");	
	}
	
	if((number ^ cons) + 1 == number)
	{
		printf("Tek sayidir.");		
	}

	return 0;
}

