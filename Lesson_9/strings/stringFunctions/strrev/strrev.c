#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                          //girilen string datayı reverse eder yani tersten okur tersine çevirir.      

int main(){
    char name[30];
    printf("Lütfen bir isim giriniz : "); scanf("%s",&name);
    
    printf("Girdiğiniz ifadenin tersten okunuşu = %s",strrev(name));
    
    return 0;
}