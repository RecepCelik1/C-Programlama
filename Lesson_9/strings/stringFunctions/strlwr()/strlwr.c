#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                            //strlwr (strlower kelimesinin kısaltılmışı) = bir string dizisine girilen karakterlerin hepsini
                            // küçük yapmak istediğimizde kullanırız.

int main(){
    char text[30];
    printf("lütfen bir text giriniz : "); scanf("%s",&text);
    
    printf("Girdiğiniz textin lower edilmiş hali = %s",strlwr(text));

    return 0;
}