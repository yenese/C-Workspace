#include <stdio.h>

int main()
{
	int x,y;
	double z,res1,res2,res3,res4;  //ilk iki sat�rda de�i�kenlerimizi istenilen �ekilde tan�mlad�k. 
	
	printf("X degerini giriniz : "); 
	scanf("%d",&x);                  //printf ile kullan�c�ya yazd�r�p scanf ile de x de�erini istedik.
	
	printf("Y degerini giriniz : ");
	scanf("%d",&y);             //burada da ayn� �ekilde y de�erini istedik.
	
	
	printf("Z degerini giriniz : ");
	scanf("%lf",&z);            //z de�erini istedik.
	
	res1 = x + y; 
	res2 = x * y;
	res3 = x / y;
	res4 = x*y*z;      //her bir i�lemi s�ras�yla res1 res2 res3 res4'e atad�k.
	
	printf("X + Y = %lf \n",res1);
	printf("X * Y = %lf \n",res2);
	printf("X / Y = %lf \n",res3);
	printf("X*Y*Z = %lf \n",res4);    //en sonda ise bu i�lemleri ekrana yazd�rd�k.
	
									//x ve y'yi integer olarak tan�mlad���m�z i�in x / y i�leminin sonucu da bir tam say� olarak gelir.Bu y�zden tam olarak istedi�imiz sonucu elde edemeyiz.
									//x ve y den herhangi biri double olarak tan�mlansayd� istedi�imiz ifadeyi elde edebilirdik.
	return 0;                
}

