#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int i = 10;
    while (i<=10 && 0<=i) {
         if(i == 4){
            break;
        }
        printf("%d\n",i);
        i--;
    }
    
    /*break komutunu programı sonlandırmak veya döngüden çıkmak için kullanabiliriz mesela yukarıda if ile birlikte kullanıp i 
        değişkeni 4 e eşit olduğu anda döngüyü sonlandırmasını sağladık.
    */
    return 0;
}