#include <stdio.h>

int main()
{
	int number;
	int sum;
	int i;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&number);
	
	sum = 0;
	
	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d \n",i);
			
			sum += i;
		}
	}
	
	
	printf("Bolenlerin toplami = %d",sum);

	return 0;
}
