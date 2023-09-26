#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int sonuc;
    char can[15]="abcdef";
    char canan[15]="ABCDEF";

    sonuc = strcmp(can,canan); // iki string dizisinin ASCII tablosundaki sayı karşılıklarını büyüklük küçüklük açısından kıyaslar
                               // ilk yazılan değişkenin değeri ikincisinden büyük ise 1, değilse 0 çıktısını verir.
    printf("%d",sonuc);

    return 0;
}