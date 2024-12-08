#include <stdio.h>

int main()
{
	int *p;
	int i;
	int j = 0;
	int size;
	int elements;
	
	printf("Dizi boyutu giriniz : ");
	scanf("%d",&size);
	
	int array[size];
	
	for (i = 0; i <size;i++)
	{
		printf("Sayi giriniz : ");
		scanf("%d",&elements);
		
		array[i] = elements;	
	}	
	
	p = array;
	
	while(p <= &array[size-1]) 
	{
		printf("%d . eleman : %d ve adresi : %d \n",j+1,*p,p);
		p++;
		j++;
	}
	
	return 0;
}
