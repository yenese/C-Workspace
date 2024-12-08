#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	int i;
	
	p = (int*) malloc(sizeof(int));
	*p = 13;
	
	printf("adres : %p\n", p);
  	printf("deger : %d \n", *p); 
  	
  	p = (int *) calloc(2, sizeof(int));
  	
  	for(i = 0; i<2; i++)
	  {
		*(p+i) = i + 1;
		printf("%d \n", *(p+i));
	  }
	  
	printf("\n");
	
	p = (int *) realloc(p, 10 * sizeof(int));
	
  	
  	for(i = 0; i<10; i++)
	  {
		*(p+i) = i + 1;
		printf("%d \n", *(p+i));
	  }
	  
  	
	
	return 0;
}
