#include<stdio.h>

int main()
{															
	int a = 6;   //00000110
	int b = 9;   //00001001
	
	int c;       //00000011
	
	c = a&b;          //i operand�n her bir bitini kar��la�t�r�r ve her iki bit de 1 ise sonu� biti 1 olur, aksi takdirde 0 olur.
	printf("and : %d \n ",c);
	
	c = a|b;         //ikisinden biri 1 ise 1 olur.
	printf("or : %d \n ",c);
	
	c = a^b;        //bitler farkl� ise sonu� biti 1 olur, ayn� ise 0 olur.
	printf("XOR : %d \n ",c);
	
	c = ~a;         //t�m bitlerini tersine �evirir
	printf("~ : %d \n ",c);
	
	c = a<<1;      //1 sola kayd�r�r.
	printf("<< : %d \n ",c);
	
	c = a>>1;      //1 sa�a kayd�r�r.
	printf(">> : %d ",c);
	
	

	
	return 0;
}
