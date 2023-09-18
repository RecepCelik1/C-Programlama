#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

                                    // for loop

        /*
            for(initializationStatement; testExpression; updateStatement)
            {
                statements inside the body of loop
            }

        */

//initializationStatement = başlangıç değer ataması veya o for döngüsü için default değişkeni atama aşaması

//testExpression = for dongüsünün kullandığı değişkenin bizim belirlediğimiz şartları sağlayıp sağlamadığı kontrol edilir eğer true ise
//döngü sonraki aşamaya geçer. (doğru olduğu sürece devam et)

//updateStatement = for döngüsünde kullanmak üzere atanan değişkenin her döngüde nasıl güncelleneceğini belirttiğimiz aşamadır.

int main() {
    setlocale(LC_ALL, "Turkish");
    int meter = 1, num;
    int sum = 0;
    printf("enter a number : "); scanf("%d",&meter);
    for (meter; meter <= 11; meter++)
    {
        sum = sum + num;
        num = num + 1;
        printf("sum = %d , num = %d \n",sum,num);
    }

    return 0;
}