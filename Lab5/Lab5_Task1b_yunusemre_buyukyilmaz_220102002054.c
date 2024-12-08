#include <stdio.h>

struct Student 
{
	char name [30];
	long long int id;
	double midterm;  
	double final;
	
};

int main()
{
	struct Student Ogrenci1;
	double average;
	struct Student *p;
	
	p = &Ogrenci1;
	
	printf("Isminizi yaziniz : ");
	scanf("%s", Ogrenci1.name);     //[^\n]  bu þekilde boþluklarý da alabiliriz.

	printf("Numaranizi giriniz : ");
	scanf("%lld", &Ogrenci1.id);
	
	printf("Midterm notunuzu giriniz : ");
	scanf("%lf", &Ogrenci1.midterm);
	
	printf("Final notunuzu giriniz : ");
	scanf("%lf", &Ogrenci1.final);
	
	average =  (p->midterm) * 0.4 + (p->final) *0.6 ;
	
	printf("Notunuz : %lf \n", average);	
	
	
	printf("%s %lld %lf %lf ", Ogrenci1.name, Ogrenci1.id, Ogrenci1.midterm, Ogrenci1.final);	
	
	
		
	return 0;
}
