#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

                //if-else Yapısı

int main() {
    setlocale(LC_ALL, "Turkish");
    int x, y;
    printf("x değişkenine bir sayı giriniz: "); scanf("%d", &x);
    printf("y değişkenine bir sayı giriniz: "); scanf("%d", &y);
    
    if( x < y){  //eğer condition true ise if içine yerleştirilmiş kodlar çalışır. değilse else içerisindekiler çalışır.
        //Kodlar
        printf("x değişkeni y değişkeninden küçüktür");
    } else if(x>y) {
        printf("x değişkeni y değişkeninden büyüktür");
    } else {
        printf("x değişkeni y değişkenine eşittir");
    }

    return 0;
}