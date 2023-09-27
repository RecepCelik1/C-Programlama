#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[30];
    char surname[30];
    printf("Lütfen bir isim giriniz : ");
    gets(name); // gets fonksiyonuda çalışır ama otoriteler tarafından pek tavsiye edilmiyor onun yerine fgets kullanmamız  
                      // tavsiye ediliyor.
    
    printf("Soyadınız giriniz lütfen : "); 
    fgets(surname, sizeof(surname),stdin); /*yalnız fgets fonksiyonunun çalışabilmesi için üç tane parametreyi girmemiz 
                                            gerekiyor. Bunlardan ilki girilicek olan datanın hangi variablea atanacağı, ikincisi
                                            kaç karakterlik yer kaplayacağı, üçüncüsü ise okunan bir dosyadan mı yoksa standar bir input
                                            mu olacağını belirler. Biz bu kullanımda standart bir input girdik.(daha ilerde dosya 
                                            okumada devamı.)*/



    printf("Name = %s\nSurname = %s",name, surname);


    return 0;
}