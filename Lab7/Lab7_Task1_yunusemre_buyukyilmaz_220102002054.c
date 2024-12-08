#include <stdio.h>

int main()
{
	FILE *fptr;
	char words[100];
	
	fptr = fopen("C:\\Users\\yunus\\OneDrive\\Desktop\\Ders\\Algorithms and programming\\C\\Lab7\\test.txt", "r");
	
	while(fgets(words,100,fptr))
	{
		puts(words);	
	}
	
	
	
	fclose(fptr);
	return 0;
}
