#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                    //strcat iki karakter dizisini birleştirir.

int main(){

    char hello[100];
    char helloThere[30] = "My favorite food is steak";
    char hi[30] = {};
    strcpy(hello, "My name is obi wan kenobi "); // bu şekilde de kullanılabilir kopyalama fonksiyonu     

    strcat(hello, helloThere);

    printf("%s",hello);

    return 0;
}