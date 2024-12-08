#include <stdio.h>
#include <stdbool.h>  //boolean degeri icin bu kutuphaneyi ekledik.

int main()
{
	int x, y;
	bool res1, res2, res3, res4;   //degiskenlerimizi tanimladik.
	
	
	printf("X degerini giriniz : ");
	scanf("%d",&x);
	
	printf("Y degerini giriniz : ");
	scanf("%d",&y);                  //kullanicidan x ve y degerlerini istedik.
	
	res1 = (x > y);  
	res2 = (x == y);
	res3 = (x!= y);
	res4 = (x>0 && y>0);            //islemleri verilen degere atadik.
	
	printf("x > y : %d \n",res1);
	printf("x == y : %d \n",res2);
	printf("x != y : %d \n",res3);
	printf("x>0 && y>0 : %d \n",res4);     //degerlerimizi ekrana yazdirdik.
	
	
	return 0;
}
