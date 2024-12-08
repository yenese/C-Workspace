#include <stdio.h>

int main()
{
	FILE *fptr;
	char words[100];
	
	fptr = fopen("C:\\Users\\yunus\\OneDrive\\Desktop\\Ders\\Algorithms and programming\\C\\Lab7\\test.txt", "r");
	
	 while (fscanf(fptr, "%s", words) != EOF)       //fscanf kelimeleri alýr.
	 {
        printf("%s \n", words);
     }
	
	
	return 0;
}
