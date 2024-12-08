#include <stdio.h>

int main()
{
	int *p;
	int i;
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
	
	
	
	for (i = 0; i<size; i++)
	{
		printf("%d . eleman : %d ve adresi : %d \n",i+1,*(p),p);
		p++;
	}
	
	return 0;
}
