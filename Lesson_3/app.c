                                        // Scanf
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Turkish");

    int sayi;
    printf("Lütfen Bir Sayı Giriniz"); scanf("%d", &sayi);

    printf("Girdiğiniz Sayı = %d", sayi);

    return 0;
}