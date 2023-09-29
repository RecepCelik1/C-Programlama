#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("Belirli aralıktaki sayıların sınırlar dahil terimler toplamı\n\n");

    
    int firstNum, lastNum, boost, terms, counter = 0;
    printf("İlk terim : "); scanf("%d",&firstNum);
    printf("Son terim : "); scanf("%d",&lastNum);
    printf("Artış miktarı : "); scanf("%d",&boost);
    counter = firstNum + 0;
    int meter = 0, i;
    terms = ((lastNum - firstNum) / boost) + 1;

    for(i=0; i<terms; i++){
        printf("%d+",firstNum);
        meter = meter + firstNum;
        firstNum = firstNum + boost;
    }
    
    printf("\n%d ve %d aralığındaki sayıların toplamı = %d",counter,lastNum,meter);
    
    return 0;
}