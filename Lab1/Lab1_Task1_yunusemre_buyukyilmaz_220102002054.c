#include <stdio.h>

int main()
{
	int x,y;
	double z,res1,res2,res3,res4;  //ilk iki satýrda deðiþkenlerimizi istenilen þekilde tanýmladýk. 
	
	printf("X degerini giriniz : "); 
	scanf("%d",&x);                  //printf ile kullanýcýya yazdýrýp scanf ile de x deðerini istedik.
	
	printf("Y degerini giriniz : ");
	scanf("%d",&y);             //burada da ayný þekilde y deðerini istedik.
	
	
	printf("Z degerini giriniz : ");
	scanf("%lf",&z);            //z deðerini istedik.
	
	res1 = x + y; 
	res2 = x * y;
	res3 = x / y;
	res4 = x*y*z;      //her bir iþlemi sýrasýyla res1 res2 res3 res4'e atadýk.
	
	printf("X + Y = %lf \n",res1);
	printf("X * Y = %lf \n",res2);
	printf("X / Y = %lf \n",res3);
	printf("X*Y*Z = %lf \n",res4);    //en sonda ise bu iþlemleri ekrana yazdýrdýk.
	
									//x ve y'yi integer olarak tanýmladýðýmýz için x / y iþleminin sonucu da bir tam sayý olarak gelir.Bu yüzden tam olarak istediðimiz sonucu elde edemeyiz.
									//x ve y den herhangi biri double olarak tanýmlansaydý istediðimiz ifadeyi elde edebilirdik.
	return 0;                
}

