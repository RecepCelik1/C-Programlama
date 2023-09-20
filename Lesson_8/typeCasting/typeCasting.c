#include <stdio.h>
#include <stdlib.h>
#include <math.h>

                        //casting

int main(){
    
    /*int sayi = 9/4;
    printf("%d",sayi);*/
    
    float sayi = (float)9/4; //typecasting tam olarak budur
    printf("%.3f",sayi);     //biraz önce virgül sonrasını bastırmamış olma 
                             // sebebi girdiğimiz sayıları tam sayı olarak 
                             // algılamasıdır.
    
    return 0;
}