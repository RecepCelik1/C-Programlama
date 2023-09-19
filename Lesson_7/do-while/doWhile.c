 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(){
    setlocale(LC_ALL, "Turkish");

    int i = 15;

    do {
        printf("%d\n",i);
        i++;
    } while(i<=10);

    /* 
        Do-while yapısı bu şekildedir. Do-while döngüsünün en büyük farkı önce do içerisine yazılmış kodları çalıştırır bi defa 
    sonra while ile döngüye girer. Yani bi defalık ne olursa olsun çalıştıracak do içerisindeki kodu daha sonra sanki o do içerisine 
    yazılmış kodlar while içerisine yazılmış ve döngüye girmiş gibi düşünebilirsiniz.
    */

    return 0;
 }