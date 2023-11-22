#include <stdio.h>
#include <stdlib.h>

                    // Logical Operators

int main()
{

    /*
        Logical Operators

        &&      ||      !
    */
    /*
        &&  ==> iki değerde true olursa true çıktısı verir
        
        ||  ==> iki önermeden en az biri true olursa true çıktısı verir.
        
         !  ==> önermenin değerini tersine çevirir.
    */
 

    int x = 15, y = 20;

    printf("%d", !(x < y && x>0));   // parantezler içi 1 e eşittir
    
    return 0;
}