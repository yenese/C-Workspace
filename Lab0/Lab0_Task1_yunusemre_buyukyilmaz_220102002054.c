#include <stdio.h>

int main() 
{
	int x, y, z, eb;
	
	
	printf("3 tane sayi giriniz: ");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	eb = x;
	
	if(y>eb) 
	{
		eb = y;
		if(z>eb)
		{
			eb = z;
		}
	}
	else if(z>eb) 
	{
		eb = z;	
	}
	
	printf("En buyuk sayi: %d",eb);
	
    return 0;   
}




	
	
