#include<stdio.h>

int main()
{
	int a = 5;   //00000101
	int b = 8;   //00001000
	int temp;	 //00001101  = 13
	
	temp = a^b;
	a = temp^a;
	b = temp^b;
	
	printf("%d  %d",a,b);
	
	return 0;
}
