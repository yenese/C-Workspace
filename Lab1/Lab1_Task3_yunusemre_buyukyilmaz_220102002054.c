#include <stdio.h>
#include <math.h>    //istenilen islemler icin (sin,cos gibi) math.h kutuphanesini ekledik.

int main()
{
	double x,y,func1,func2,func3,func4,func5;   //degiskenleri double formatýnda tanýmladýk.
	
	printf("X degerini giriniz : ");
	scanf("%lf",&x);
	
	printf("Y degerini giriniz :");
	scanf("%lf",&y);                         //kullanicidan x ve y degerlerini istedik.
	
	func1 =  sin(x)*M_PI;
	func2 = cos(x)*M_PI;
	func3 = sin(y)*cos(x)*M_PI;
	func4 = x*sin(y)*cos(x)*M_PI;
	func5 = exp(y)*x*sin(x)*cos(y)*M_PI;    //islemleri atadýk.
	
	printf("fonksiyon 1 : %lf \n ",func1);
	printf("fonksiyon 2 : %lf \n ",func2);	
	printf("fonksiyon 3 : %lf \n ",func3);
	printf("fonksiyon 4 : %lf \n ",func4);
	printf("fonksiyon 5 : %lf \n ",func5); 	 //islemleri ekrana yazdýrdýk.
	
	return 0;
}
