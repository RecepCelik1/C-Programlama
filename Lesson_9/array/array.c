#include <stdio.h>
#include <stdlib.h>

                //Diziler

int main() {
    //aynı tipten oluşan elemanların tek bir değişken ile ifade edilmesidir.
    
    //int sayi[10];  dizi tam olarak bu şekilde oluşturulur.
    //köşeli parantezler içerisindeki 10 da o dizi içerisinde 10 tane eleman
    //olduğunu temsil eder.
    
    /*  
        diziler hafızada n*s byte kadar yer kaplar.
        n = değişken türünün hafızada kapladığı yer
        s = dizideki eleman sayısı
    */
    
    // Dikkat edilmesi gereken hususlardan bir tanesi C dili saymaya 0 dan başlar. Yani bir dizinin ilk elemanı 0 numaralı elemandır.
    // örneğin dizinin ikinci elemanını bastırmak için dizininAdi[1]; şeklinde belirtilmesi gerekir.

    int num[10],i;
    for(i=0; i<=9;i++) 
    {
        num[i] = i*2;
        printf("%d numaralı array = %d\n",i,num[i]);
    }

    return 0;
}