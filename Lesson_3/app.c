#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Turkish");

    char karakterim;

    printf("Bir Karakter Giriniz : ");
    scanf("%c", &karakterim);
    printf("Girdiğiniz Karakter = %c", karakterim);

    return 0;
}
