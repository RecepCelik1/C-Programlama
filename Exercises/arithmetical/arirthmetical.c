#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, x,result;
    printf("a, b, c ve x sayılarını giriniz: "); scanf("%d %d %d %d", &a, &b, &c, &x);
    result = (a*x*x) + (b*x) + c;
    printf("Sonuç = %d",result);
    return 0;
}