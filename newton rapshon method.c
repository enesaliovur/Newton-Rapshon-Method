#include<stdio.h>                               /* Gerekli k�t�phaneleri tan�mlad�m */
#include<math.h>          

#define   f(x)    pow(x,3)-2*pow(x,2)-5       /*Soruda benden istenilen fonksiyonu f(x) olarak tan�mlad�m */
#define   g(x)   3*x*x - 4*x                  /* f(x) fonksiyonunun t�revini g(x) olarak tan�mlad�m.*/
#define e 0.01                                /* Soruda verilen 0.01 hata pay�n� e de�i�kenine atad�m. */



problem_cozum(){                               /* problem_cozum isminde bir fonksiyon olu�turdum*/             
	int i=0;                                         
	float x0=2, x1, f0, f1, g0;                
    printf("\nIterasyon\tx0\t\tx1\t\tHata\n");

do{
	f0=f(x0);
	g0=g(x0);                                 /*Methodu uygulamak i�in i�lemleri yapt�rd�m*/
	x1=x0-(f0/g0); 
	float hata=fabs(x1-x0);                   /*Hata de�erinin tan�mlanmas�*/
	
	f1=f(x1);

	i++;                                               

    
    printf("%d\t\t%f\t%f\t%f\n",i,x0,x1,hata);       /*Sonu�lar� yazd�rd�m*/
	  x0=x1;

}

while(fabs(f1)>e);                                   /*Durma ko�ulunu kontrol ettirdim*/             
return 0;
}
int main(){
  problem_cozum();                          /*problem_cozum fonksiyonunu main fonksiyonunun i�inde �a��rd�m*/
}
