#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    int meter = 1;

    for (meter; meter <= 10; meter++)
    {

        if(meter==5){
            continue;
        }
                printf("%d\n",meter);
    }

    // continue kullanımı da bu şekildedir. outputta görüldüğü üzere 1 den 10 a kadar olan değerler sıralandı ama derleyici 5 gördüğünde
    //es geçti.

    return 0;
}