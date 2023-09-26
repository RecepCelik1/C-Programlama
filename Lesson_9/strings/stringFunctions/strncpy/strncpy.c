#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                            //bir önceki strcpy'den farkı tahmin edileceği üzere belirli bir karaktere kadar kopyalar.
int main(){

    char hello[30] = "My name is obi wan kenobi";
    char helloThere[30] = "My favorite food is steak";
    char hi[30] = {};

    strncpy(hi, hello, 10); //bi öncekinden bir farkı daha var kopyalama yapılacak olan diziye boşta olsa bir karakter atamamız 
    printf("%s",hi);        //gerekiyor yoksa kodumuz hata verir.


    return 0;
}