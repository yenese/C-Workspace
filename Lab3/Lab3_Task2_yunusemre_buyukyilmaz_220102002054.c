#include <stdio.h>

void create_array(int a1[4][4])
{
	int i,j;

	printf("4'e 4'luk bir dizi giriniz : ");
	
	for(i = 0; i<4; i++)
	{
		for(j = 0; j<4; j++)
		{
			printf("%d. satirin %d. elemani :",i+1, j+1);
			scanf("%d",&a1[i][j]);
		}
	}
}

int main()
{  
	int a1[4][4];
	int i,j;
	int count = 0;
	
	create_array(a1);
	
	for(i = 0; i<4; i++)
	{
		for(j = 0; j<4; j++)
		{
			if(a1[i][j] < 0)
			{
				count += 1;
			}
			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}
	
	printf("Bu dizide %d tane negatif sayi vardir.",count);

	return 0;
}
