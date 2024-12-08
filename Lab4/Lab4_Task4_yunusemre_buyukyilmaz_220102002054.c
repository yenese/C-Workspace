#include <stdio.h>

int *print_adress(int array[], int number, int size) {
    int i;
    
    for (i = 0; i < size; i++) 
	{
        if (array[i] == number) 
		{
            return &array[i];
        }
    }
    return NULL;   
}

int main() 
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int number;


    printf("Bir sayi giriniz : ");
    scanf("%d", &number);
    
    int *p = print_adress(array, number, size);
    
    
    
    printf("Girdiginiz sayinin adresi : %d \n", p);
    
    
    return 0;
}

