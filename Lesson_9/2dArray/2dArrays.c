#include <stdio.h>
#include <stdlib.h>

                    //Çok boyutlu sayı dizileri

int main() {

            /*      Çok boyutlu sayı dizileri

                # Matris oluşturmak için kullanılır.

                # Kodların hafızada tutulan kısmı doğrusal olmasına rağmen çok boyutlu sayı dizileri
                doğrusal değildir. O halde çok boyutlu dizileri doğrusal hale getirmek için dizinin
                dizisi şeklinde yazmamız gerekir.

                # Dizinin içinde dizi : Bir dizinin içindeki tüm elemanların dizi olması durumu.
            
            */


    //örneğin : N x P eleman bulunduran bir matris tanımlarsak: int m[N][p];

   // int m[4][3];

    //Aynen yukarıda olduğu gibi. Şimdi bu ifade ne demek hadi biraz daha açalım.
    
    /*
            /
           /    m[0][0]    
    m[0] <      m[0][1]
           \    m[0][2]
            \    


            /
           /    m[1][0]    
    m[1] <      m[1][1]
           \    m[1][2]
            \


            /
           /    m[2][0]    
    m[2] <      m[2][1]
           \    m[2][2]
            \    


            /
           /    m[3][0]    
    m[3] <      m[3][1]
           \    m[3][2]
            \    

    aynen yukarıda gösterildiği gibi modellenir ve ramlarde bu şekilde tutulur. 4 tane ana index bulunur ve her biri içerisinde 3 tane
    küçük depo içerir. 

    */

   /*
        # m[2][1] 3. sütun 2. satırdaki elemanı belirtir.

        # Çok boyutlu diziyi tanımlarken sonsuz uzunlukta bir matris gibi tanımlayabiliriz.
            *örneğin: aşağıdaki matrisi tanımlayalım:
            *int matrice[][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
        -
        
        # Burada, ilk matrisin kaç eleman içerdiğini yazıp yazmak tamamen bize kalmış fakat 2. matrisin eleman sayısını yazmak 
        zorundayız.
   
   */

        int array[2][2] = { {18,19} , {20,21} };
    printf("%d\n",array[1][1]);
    printf("%d, %d",array[0][0],array[0][1]);

    return 0;
}