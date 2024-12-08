#include<stdio.h>

struct Date {
    unsigned int day : 5;   
    unsigned int month : 4; 
    unsigned int year : 11;  
};



int main()
{
	struct Date birthday;
	
	birthday.day = 15;
	birthday.month = 3;
	birthday.year = 2004;
	
	printf("%d / %d / %d",birthday.day, birthday.month, birthday.year);
	
}
