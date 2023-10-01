#include <stdio.h>
#include <stdlib.h>

                            //iki tip değişken tanımlayabiliriz biri local diğeri global

    int num;   //==> işte bu global değişkendir

int main(){

    int num;   //==> işte bu local değişkendir bi önceki repolarda bahsettiğim minecraft biyom mevzusu

    {   
        //  fonksiyonlar içerisinde de local alanlar oluşturabiliyoruz aynen bu şekilde görüldüğü gibi

            int num;

    }

    return 0;
}