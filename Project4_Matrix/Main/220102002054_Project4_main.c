#include <stdio.h>
#include <stdbool.h>
#include "my_array_library.h"


int main()
{
    int matrix[2][3] = {
	{1, 3, 1},
	{2,3,4}};
    
    int matrix2[2][2] = {{1,1},{0,1}};
    
	int matrix3[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}};
        
        
    double matrix4[3][3] = {
        {2, -1, -2},
        {-4, 6, 3},
        {-4, -2, 8}
    };

	
	
	find_index(2,3,matrix);
	printf("\n");
	
	find_non_repeated(2, 3, matrix);
	printf("\n");

	min_element(2,3,matrix);
	printf("\n");
	
	max_element(2,3,matrix);
	printf("\n");
	
	transpose(2,3,matrix);
	printf("\n");
	
	descending_order(2,3,matrix);
	printf("\n");
	
	
	
	
	//product_matrix(2,3,3,2,matrix,matrix2);
	printf("\n");
	
	identity_matrix(2,2,matrix2);
	printf("\n");
	
	symmetric(3,3,matrix3);
	printf("\n");
	
	//row_mult(3,3,matrix3,2,2);
	
	//row_sum(3,3,matrix3,1,2);
	
	LU_decomposition(3,3,matrix4);
	
	
	
	



    return 0;
}



