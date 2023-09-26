#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int sonuc;
    char can[15] = "abcdef";
    char canan[15] = "ABCDEF"; 

    sonuc = strncmp(can, canan, 4); //strcmpden tek farkı ilk kaç karakteri kıyaslayacağını biz belirleyebiliyoruz.

    if(sonuc < 0) {
        printf("Can canandan daha küçüktür");
    } else if(sonuc > 0) {
        printf("Can canandan daha küçüktür");
    } else {
        printf("ikiside birbirine eşittir");
    }

    return 0;
}