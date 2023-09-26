#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                            //strncat == ilk dizinin sonuna ikinci dizideki ilk n kadar karakteri atama anlamına gelir.

int main(){

    char hello[100] = {};
    char helloThere[30] = "My favorite food is steak";

    strcat(hello, "My name is obi wan kenobi "); 

    strncat(hello, helloThere, 11); //aynen bu şekilde kullanılır

    printf("%s",hello);

    return 0;
}