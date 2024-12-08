#ifndef my_array_library
#define my_array_library


struct Matrix{
	int row;
	int column;
};


int find_index(int m, int n, int array[m][n]);

int find_non_repeated(int m, int n, int array[m][n]);

int min_element(int m, int n, int array[m][n]);

int max_element(int m, int n, int array[m][n]);

int descending_order(int m, int n, int array[m][n]);

void transpose(int m, int n, int array[m][n]);

void product_matrix(int m1, int n1, int m2, int n2, int array1[m1][n1], int array2[m2][n2]);

int identity_matrix(int m, int n, int array[m][n]);

int symmetric(int m, int n, int array[m][n]);

void print_matrix(int m, int n, int array[m][n]);

int row_mult(int m, int n, int array[m][n], int number, int row);

int row_sum(int m, int n, int array[m][n], int add_from, int add_to);

void LU_decomposition(int m, int n, double array[m][n]);

#endif

