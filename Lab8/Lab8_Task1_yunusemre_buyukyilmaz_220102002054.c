#include<stdio.h>

int main()
{															
	int a = 6;   //00000110
	int b = 9;   //00001001
	
	int c;       //00000011
	
	c = a&b;          //i operandın her bir bitini karşılaştırır ve her iki bit de 1 ise sonuç biti 1 olur, aksi takdirde 0 olur.
	printf("and : %d \n ",c);
	
	c = a|b;         //ikisinden biri 1 ise 1 olur.
	printf("or : %d \n ",c);
	
	c = a^b;        //bitler farklı ise sonuç biti 1 olur, aynı ise 0 olur.
	printf("XOR : %d \n ",c);
	
	c = ~a;         //tüm bitlerini tersine çevirir
	printf("~ : %d \n ",c);
	
	c = a<<1;      //1 sola kaydırır.
	printf("<< : %d \n ",c);
	
	c = a>>1;      //1 sağa kaydırır.
	printf(">> : %d ",c);
	
	

	
	return 0;
}
