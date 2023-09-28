#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                            //strstr()  bir string içerisinde belirli karakterleri arar.

int main(){

    char string[30] = "C dilini öğreniyoruz";
    char *sub;    //bu pointer oluyor burayı anlamamış olabiliriz normal çünkü henüz pointerları bilmiyoruz ama ilerde öğreneceğiz.
    sub=strstr(string,"dil");
    printf("\nArama sonrası yeni string: %s",sub);


    return 0;
}