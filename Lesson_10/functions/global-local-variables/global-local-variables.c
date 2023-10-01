#include <stdio.h>
#include <stdlib.h>

                            //iki tip değişken tanımlayabiliriz biri local diğeri global

    int num;   //==> işte bu global değişkendir

void ObiWanKenobi(){
    int num1 = 3;
    printf("%d",num1);
}

int main(){

    int num;   //==> işte bu local değişkendir bi önceki repolarda bahsettiğim minecraft biyom mevzusu

    {   

        //  fonksiyonlar içerisinde de local alanlar oluşturabiliyoruz aynen bu şekilde görüldüğü gibi

            int num;
            printf("%d",num);  //==> bu print kendisine en yakın olan değişkeni, en locali yazdıracaktır

    }


    {

        

    }

    return 0;
}