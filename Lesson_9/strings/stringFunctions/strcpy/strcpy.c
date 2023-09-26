#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                        //strcpy fonksiyonu bir string ifadeyi başka bir karakter dizisine kopyalamaya, atamaya yarar.

int main(){

    char hello[30] = "My name is obi wan kenobi";
    char helloThere[30] = "My favorite food is steak";
    char hi[30];
    strcpy(hi, hello);  // kullanımı bu şekildedir unutma sağdaki değeri soldakine atar her zaman olduğu gibi.

    printf("%s",hi);

    return 0;   
}