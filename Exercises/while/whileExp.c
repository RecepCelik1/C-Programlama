#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("Lütfen bir sayı giriniz: "); scanf("%d",&a);
    while(0<a){
        printf("%d  ", a);
        a--;
    }
    return 0;
}