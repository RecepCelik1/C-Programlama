#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

                //bir sayının tek mi çift mi olduğunu bulma algoritması

int main() {
    setlocale(LC_ALL, "Turkish");
    int num;
    printf("Bir sayı giriniz : "); scanf("%d",&num);
    if (num % 2==0){
        printf("Girdiğiniz sayı çifttir.");
    } else {
        printf("Girdiğiniz sayı tektir.");
    }
    
    
    return 0;
}