// girilen iki sayı arasındaki terim sayısını ve terimler toplamını bulan program
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Turkish");
    
    int firstNum, lastNum, accruement;
    int terms, termSum = 0, meter = 1;

    
    printf("Please enter your first number : "); scanf("%d",&firstNum);
    printf("Please enter your last number : "); scanf("%d",&lastNum);
    printf("Please enter the accruement : "); scanf("%d",&accruement);
    terms = ((lastNum-firstNum)/accruement + 1); // for the number of terms
    
    for(meter; meter <= terms; meter++) // for the sum of terms
    {

        termSum = termSum + firstNum;
        firstNum = firstNum + accruement;
    }

    printf("The terms' sum is aqual to = %d",termSum);

    return 0;
} 