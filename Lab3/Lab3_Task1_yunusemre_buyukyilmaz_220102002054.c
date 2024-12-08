#include <stdio.h>

int main()
{
	int array1[4] =  {-4,6,21,13};
	int array2[4] = {9,-7,33,0};
	int toplam[4];
	int i,j;
	
	for (i = 0; i < 4; i++) 
	{
        toplam[i] = array1[i] + array2[i];
    }
	
	for(i = 0; i<4; i++)
	{
		printf("%d ", toplam[i]);
	}
	printf("\n");

	return 0;
}

