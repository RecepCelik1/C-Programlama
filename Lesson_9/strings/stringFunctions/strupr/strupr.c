#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                                    //strlwr fonksiyonunun tam tersi girilen bir string dizisindeki her karakteri büyük harfe çevirir.

int main(){
    
    char strings[30];

    printf("Lütfen bir text giriniz"); scanf("%s",&strings);
    printf("Girdiğiniz ifade = %s\n",strings); 
    printf("Girdiğiniz ifadenin büyük harflere dönüştürülmüş hali ise = %s",strupr(strings));


    return 0;
}