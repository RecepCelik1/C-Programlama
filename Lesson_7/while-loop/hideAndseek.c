#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int i = 10;
    while (i<=10 && 0<=i) {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}