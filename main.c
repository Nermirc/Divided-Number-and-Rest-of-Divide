#include <stdio.h>
#include <stdlib.h>

    void bolmeislemi(int bolunen , int bolen)
    {
        int kalan,bolum;
         bolum=bolunen/bolen;
        kalan=bolunen%bolum;

        printf("Kalan = %d Bolum = %d",kalan,bolum);
    }
int main()
{
   //Bolunen ve kalan degerini fonksiyon yardimiyla yaziniz.
   int bolunen,bolen;
   printf("Lutfen bolunen sayiyi giriniz.\n");
   scanf("%d",&bolunen);
   printf("Lutfen bolen sayiyi giriniz.\n");
   scanf("%d",&bolen);
   bolmeislemi(bolunen,bolen);
}
