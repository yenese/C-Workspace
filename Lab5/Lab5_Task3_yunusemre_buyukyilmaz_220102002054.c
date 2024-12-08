#include <stdio.h>
#include <stdlib.h>

struct student
{ 
	char name [30];
	long long int number;
	double gpa;
	
	
}; 

int main()
{
	struct student *p = (struct student *)malloc(3 * sizeof(struct student));
	
	int i;
	
	for(i = 1; i<4; i++)
	{
		printf("Isminizi yaziniz : ");
		scanf("%s", p[i].name);
		
		printf("Numaranizi giriniz : ");
		scanf("%lld", &p[i].number);
		
		printf("GPA giriniz : ");
		scanf("%lf", &p[i].gpa);
	}
	
	
	for(i = 1; i<4; i++)
	{
		printf("Isim : %s \n",p[i].name);
		printf("Numara : %lld \n", p[i].number);
		printf("GPA : %lf \n", p[i].gpa);
		
		printf("\n");
	}
	
	
	
	free(p);
	
	return 0;
	
}
