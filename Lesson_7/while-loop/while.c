#include <stdio.h>

/*      While Döngüsü

    while(kosul) {
        //the body of the loop
        
    }
    
    koşul doğru olduğu sürece while döngüsü çalışır. (taki bir break veya continue ile karşılaşana kadar. daha ilerinin konusu bu.)

*/

int main() {
    
    int i = 0;
    while(i<5){
        printf("%d",i);
        i++;
    }

    return 0;
}