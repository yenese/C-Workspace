#include <stdio.h>
#include <stdlib.h>


struct complex_number
{
	double real;
	double imaginary;
	
};

struct complex_number sum(struct complex_number first, struct complex_number sec)
{
	struct complex_number sum;
	
	sum.real = first.real + sec.real;
	sum.imaginary = first.imaginary + sec.imaginary;
	
	return sum;	
}

int main()
{
	struct complex_number first, sec, res;
	
	printf("Ilk sayinin gercek kismini giriniz : ");
	scanf("%lf", &first.real);
	
	printf("Ilk sayinin sanal kismini giriniz : ");
	scanf("%lf", &first.imaginary);
	
	
	printf("Ikinci sayinin gercek kismini giriniz : ");
	scanf("%lf", &sec.real);
	
	printf("Ikinci sayinin sanal kismini giriniz : ");
	scanf("%lf", &sec.imaginary);
	
	res =  sum(first, sec);
	
	printf("Toplam : %.1lf + %.1lfi", res.real, res.imaginary);
	
	return 0;
}




