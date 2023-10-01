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

            int num = 8;
            printf("%d\n",num);  //==> bu print kendisine en yakın olan değişkeni, en locali yazdıracaktır

    }


    {

        int num1 = 5;
        printf("%d\n",num1);   //==> pekiii böyle bir durumda ne olurdu? Yine aynı mantık yukarıdaki num1 void fonksiyonunun num1 i
        ObiWanKenobi();        //   burayı bağlayan bişey yoktur daha sonra fonksiyonu çağırdığımız için ekrana print edicektir.

    }

    return 0;
}