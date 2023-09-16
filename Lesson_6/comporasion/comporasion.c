#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

                //if-else Yapısı

int main() {
    setlocale(LC_ALL, "Turkish");
    int x, y, z;
    printf("x değişkenine bir sayı giriniz: "); scanf("%d", &x);
    printf("y değişkenine bir sayı giriniz: "); scanf("%d", &y);
    printf("z değişkenine bir sayı giriniz: "); scanf("%d", &z);    
    
    if (x<y && y<z){
        printf("sıralama = x<y<z");        
    } else if (y<x && x<z){
        printf("sıralama = y<x<z");        
    } else if (z<y && y<x){
        printf("sıralama = z<y<x");
    } else if (y<z && z<x){
        printf("sıralama = y<z<x");
    } else if (z<x && x<y){
        printf("sıralama = z<x<y");
    } else if (x<z && z<y){
        printf("sıralama = x<z<y");
    }
    return 0;
}
