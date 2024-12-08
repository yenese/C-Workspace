#include<stdio.h>

int main()
{
	FILE *fptr;
	char myletter;
	char data[100];
	
	fptr = fopen("C:\\Users\\yunus\\OneDrive\\Desktop\\Ders\\Algorithms and programming\\C\\Lab7\\data.txt", "r");
	
	/*while((myletter = getc(fptr)) != EOF) {
		printf("%c",myletter);	
	}*/
	
	
	while(fgets(data,5,fptr))            //fgets tek satýr yazdýrýr.Döngü içine alýrsak her satýrý yazdýrabiliriz.
	{
		printf("%s",data);	
	}
	
	
	fclose(fptr);
	return 0;
}

