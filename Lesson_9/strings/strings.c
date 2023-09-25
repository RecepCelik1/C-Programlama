#include <stdio.h>
#include <stdlib.h>

                        //strings

int main() {
    int i = 0;
    
    char string[] = {'Y','T','U','\0'}; //  \0  ifadesi C programlama da karakterlerin bittiğini ifade eder. 

    char string1[] = "YTU"; 

    /*
       Yukarıda aynı metin iki farklı şekilde yazıldı derleyici de fakat her ikiside hafızada aynı şekilde depolanır.
        --------            ---------           ---------           --------
        |   Y   |          |    T    |         |    U    |         |   \0   |
        --------            ---------           ---------           --------
        string[0]           string[1]           string[2]           string[3]

    */

    for(i=0; i<3; i++){

    printf("%c",string[i]);

    }

    printf("\n%s\n\n",string1);

    // karakter dizilerine ulaşmak için %s operatörü kullanılır. (string den geliyor.)

    char stringInput[20]; // eğer değişkeni tanımlayıp yukarıdaki gibi değer ataması yapmadıysak karakter kaç karakter
                          // tanımlanabileceğini önceden belirtmemiz gerekir.

    printf("Bir string giriniz lütfen : "); scanf("%s",&stringInput);
    printf("Girdiğiniz string = %s",stringInput);

    return 0;
}