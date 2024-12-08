#include <stdio.h>

void nxn_matrix(int n, int array1[n][n]) 
{
    int i, j;
    int max_number; 

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d. satirin %d. elemani :", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }
	
	max_number = array1[0][0];
	
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
        	if (array1[i][j] >= max_number) 
            {
            	max_number = array1[i][j];
            }
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    
    printf("Matrixin en buyuk elemani : %d", max_number);
}


void transpose(int n,int a1[n][n])
{
	int transpose[n][n];
	
	int i,j;
	
	
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			transpose[i][j] = a1[j][i];	
		}
	}
	
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			printf("%d ",transpose[i][j]);	
		}
		printf("\n");
	}	
}
	


int main() 
{
    int n;
    printf("Matrixin boyutunu giriniz: ");
    scanf("%d", &n);

    int a1[n][n];
    nxn_matrix(n, a1);
    printf("\n"); 
    transpose(n,a1);




    return 0;
}

