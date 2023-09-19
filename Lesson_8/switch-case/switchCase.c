#include <stdio.h>
#include <stdlib.h>

int main() {
    int day;
    while(1){
        
    printf("Enter a number ( between 1-7) : "); scanf("%d",&day);
    
    switch(day)
    {
        case 1:
        printf("Monday\n");
        break;
        
        case 2:
        printf("Tuesday\n");
        break;
        
        case 3:
        printf("Wednesday\n");
        break;
        
        case 4:
        printf("Thursday\n");
        break;
        
        case 5:
        printf("Friday\n");
        break;
        
        case 6:
        printf("Saturday\n");
        break;
        
        case 7:
        printf("Sunday\n");
        break;
        
        default:
        printf("Please enter a valid number!!\n");
    }
}

    //switch-case kullanımıda yukarıda görüldüğü gibidir. Eğer her caseden sonra break kullanmazsak switch durmaz ve bütün caseleri
    //döner case 1 case 2... diye gider. 

    /*switch-case yapısı if-else ile benzerdir. Buradaki default komutu da if-else yapısındaki else karşılık gelmektedir. Eğer sonuç 
    hiç bir case eşit değilse default içine yazılmış kodlar çalışır.
    */

    return 0;
}