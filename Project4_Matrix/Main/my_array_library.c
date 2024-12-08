#include <stdio.h>
#include <stdbool.h>
#include "my_array_library.h"


/////////////////////////////////////////////////////////////////



int find_index(int m, int n, int array[m][n])
{
	int element;
	int i,j;
	
	printf("Istediginiz elementi giriniz : ");
	scanf("%d",&element);
	
	
	for(i = 0; i<m; i++)
	{
		for(j = 0; j<n; j++)
		{
			if(array[i][j] == element){
				printf("%d  %d \n",i+1, j+1);
			}	
		}	
	}
			
}



/////////////////////////////////////////////////////////////////



int find_non_repeated(int m, int n, int array[m][n])
{
    int i, j, k, count;
    int size = m * n;
    int non_repeated[size];
    int last[size];
    int last_count = 0;

    
    k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            non_repeated[k] = array[i][j];
            k++;
        }
    }

    
    for (i = 0; i < size; i++)
    {
        count = 0;
        for (j = 0; j < size; j++)
        {
            if (non_repeated[i] == non_repeated[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            last[last_count] = non_repeated[i];
            last_count++;
        }
    }


    for (i = 0; i < last_count; i++)
    {
        printf("%d ", last[i]);
    }
    printf("\n");
    

}



/////////////////////////////////////////////////////////////////



int min_element(int m, int n, int array[m][n])
{
	int i,j;
	int min_element = array[0][0];
	
	for(i = 0; i<m; i++)
	{
		for(j = 0; j<n; j++)
		{
			if(array[i][j] < min_element){
				min_element = array[i][j];
			}	
		}
	}
	printf("%Min element: %d ",min_element);	
	
}



/////////////////////////////////////////////////////////////////



int max_element(int m, int n, int array[m][n])
{
	int max_element;
	int i,j;
	
	for(i = 0; i<m; i++)
	{
		max_element = array[i][0];
		
		for(j = 0; j<n; j++)
		{
			if(array[i][j] > max_element)
			{
				max_element = array[i][j];	
			}
		}
		printf("%d. satirinin en buyuk elemani : %d \n",i+1,max_element);	
	}
	
	
}



/////////////////////////////////////////////////////////////////



int descending_order(int m, int n, int array[m][n])        
{
	int i, j;
    int temp;
    bool end; 

    for (i = 0; i < m; i++) 
	{
        do 
		{
            end = false; 
            for (j = 0; j < n - 1; j++) {
                if (array[i][j] < array[i][j + 1]) 
				{
                    temp = array[i][j];
                    array[i][j] = array[i][j + 1];
                    array[i][j + 1] = temp;
                    end = true; 
                }
            }
        } while (end); 
    }

    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}



/////////////////////////////////////////////////////////////////



void transpose(int m, int n, int array[m][n])
{
    int transpose[n][m]; 
    
    int i, j;
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = array[i][j]; 
        }
    }
    
    
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%d ", transpose[i][j]);    
        }
        printf("\n");
    }    
}



/////////////////////////////////////////////////////////////////



void product_matrix(int m1, int n1, int m2, int n2, int array1[m1][n1], int array2[m2][n2]) {
    
    
    if (n1 != m2) {
        printf("Boyutlar uygun degil\n");
        return;
    }
    
    int product[m1][n2];
    int i, j, k;
    
    
    for (i = 0; i < m1; i++) 
	{
        for (j = 0; j < n2; j++) 
		{
            product[i][j] = 0;
        }
    }
    

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n1; k++) {
                product[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    
   
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}



/////////////////////////////////////////////////////////////////



int identity_matrix(int m, int n, int array[m][n])
{
	int i,j;    
	int check = 1;                                      
	
	if(m != n)
	{
		printf("Boyutlardan dolayi Birim matrix degil.");
		return 0;
	}
	
	else
	{
		for(i = 0; i<m; i++)
		{
			if(array[i][i] == 1)
			{
				for(j = 0; j<n; j++)
				{
					if(j != i)
					{
						if(array[i][j] != 0)
						{
							check = 0;
						}
					}
					
				}	
			}
			
			else
			{
				printf("1'e esit degil.'");
				return 0;
			}		
		}
		
		if(check == 1)
		{	
			printf("Birim matrixtir.");
			return 1;
		}
		if(check == 0)
		{
			printf("Birim matrix degil.(0 a esit olmayan sayilar var.)");	
		}
	}
}



/////////////////////////////////////////////////////////////////



int symmetric(int m, int n, int array[m][n])
{			
	int transpose[m][n];
	
	int i,j;
	
	int check = 1;
	
	
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			transpose[i][j] = array[j][i];	
		}
	}
	
	
	for(i = 0; i<m; i++)
	{
		for(j = 0; j<n; j++)
		{
			if(array[i][j] != transpose[i][j])
			{
				check = 0;	
			}
		}	
	}
	
	printf("%d ",check);
	
	return check;
	
}



/////////////////////////////////////////////////////////////////



void print_matrix(int m, int n, int array[m][n])
{
	int i,j; 
	
	for(i = 0; i<m; i++)
	{
		for(j = 0; j<n; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");	
	}
			
}



/////////////////////////////////////////////////////////////////



int row_mult(int m, int n, int array[m][n],int number,int row)
{
	int i;
	
	i = 0;
	
	while(i<n)
	{
		array[row-1][i] *= number;
		i++;
	}
	
	
	print_matrix(m,n,array);
}



/////////////////////////////////////////////////////////////////



int row_sum(int m, int n, int array[m][n],int add_from,int add_to)
{
	
	int j;
	
	for(j = 0; j<n; j++)
	{
		array[add_to-1][j] += array[add_from-1][j];
	}

	print_matrix(m,n,array);
		
}



/////////////////////////////////////////////////////////////////



void LU_decomposition(int m, int n, double array[m][n]) {
    int i, j, k;

    double L[m][n];
    double U[m][n];

    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            L[i][j] = 0;
            U[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        // Üst üçgen 
        for (j = i; j < n; j++) {
            U[i][j] = array[i][j];
            for (k = 0; k < i; k++) {
                U[i][j] -= L[i][k] * U[k][j];
            }
        }

        // Alt üçgen 
        for (j = i; j < m; j++) {
            if (i == j) {
                L[i][i] = 1; 
            } else {
                L[j][i] = array[j][i];
                for (k = 0; k < i; k++) {
                    L[j][i] -= L[j][k] * U[k][i];
                }
                L[j][i] /= U[i][i];
            }
        }
    }

    printf("L Matrisi:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%f ", L[i][j]);
        }
        printf("\n");
    }

    printf("U Matrisi:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%f ", U[i][j]);
        }
        printf("\n");
    }
}




