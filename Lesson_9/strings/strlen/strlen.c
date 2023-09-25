#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Bu string ile ilgili fonksiyonları kullanabilmek için string.h kütüphanesini dahil etmelisiniz projeye.

int main(){
    char months[] = "September";

    printf("Karakter dizimizin boyu %d\n\n",strlen(months));  /* Bir karakter dizisinin boyunu, kaç karakter içerdiğini bulmak için 
                                                           kullanılır. (strlen fonksiyonu bir dizinin karakter sayısını bulurken 
                                                            en sondaki \0 bitirici karakteri umursamaz ve sayıma dahil etmez fakat 
                                                            sizeof fonksiyonu bu \0 ı da sayıma dahil eder.). */

    printf("sizeof fonksiyonu month dizisinin boyunu %d olarak ölçtü.",sizeof(months)); //konsoloda görüldüğü gibi.

    return 0;
}