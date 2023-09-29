#include <stdio.h>
#include <stdlib.h>

                //fonksiyonlar belirlediğimiz işlemleri yapabilmemize olanak sağlayan kod bloklarıdır.

int main(){
    
    /* fonksiyonlar mc biyomları gibi ayrıdı bir iklimdir ve içerisindeki değişkenler sadece o fonksiyonun satırları arasında çalışır.
    yani main fonksiyonum içerisine number adında bir değişken tanımladığımda başka bir fonksiyon içerisinde tekrar number adında bir
    değişken tanımlayabilirim. Global değişkenleri ise fonksiyonların dışında tanımlarız ve genelde programın en başında, preprocessor
    aşamasından hemen sonra tanımlanır.
    */

   /* şimdi bir fonksiyon diğerinden bağımsız bir biyom demiştik peki yok mu bir yolu bu fonksiyonlar arasında iletişim veya etkileşim
   kurma yolu ?? olmaz mı be abe. Öncelikle bunun en basit yolu fonksiyonu direkt çağırarak yapabiliriz. Her fonksiyon bir başka 
   fonksiyon tarafından çağırılabilir kendisi de dahil. 

   main();  // bir başka fonksiyon içerisinde bu şekilde çağırabiliriz diğer fonksiyonları.

   // fonksiyon çağırmadan da yapılabilicek şeyler mevcuttur parametreler ve return statement. Parametreler fonksiyonu dışarıdan data
   girişinin olmasını sağlar return ise fonksiyonun dışarıya data çıktı verebilmesini sağlar. Fonksiyonun adından sonraki parantezler
   içerisine yazarız parametlerimizi ve artık bir değişken olmuştur onlar farklı bir fonksiyon tarafından o parametreler kullanılarak
   fonksiyona data girişi yapabiliriz. 

   // return kelimesinden sonra dışarıya hangi datayı vermek istiyorsak onu yazarız fonksiyon o datayı vericektir çıktı olarak. Dışarı
   çıktı veren, değer döndüren fonksiyonlara değer döndüren fonksiyonlar denir. Çıktı vermeyen fonksiyonlara ise değer döndürmeyen
   fonksiyonlar denir. Bir fonksiyon değer döndürmüyorsa void kullanılır.
   
    void functionName()

   */

    int a;
    printf("Please enter a number : "); scanf("%d",&a);
    oddOrEven(a);

    if(oddOrEven()==0){
        printf("You were enter an even number!!");
    } else{
        printf("You were enter an odd number!!");
    }

    return 0;
}

int oddOrEven(int number){

    int turn;
    if(number%2==0){
        turn = 0;
    } else{
        turn = 1;
    }

    return turn;
}

//Yukarıda bir fonksiyonda nasıl parametre atanır, o parametre üzerinden fonksiyona data nasıl sokulur daha sonra o fonksiyonun çıktı
// olarak verdiği data return ile nasıl dışarıya çıktı verilir çok güzel bir örneği mevcuttur efenim.