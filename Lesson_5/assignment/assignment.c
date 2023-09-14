#include <stdio.h>
#include <stdlib.h>

                            /*
                                Assignment Operator

                            =   +=  -=  *=  /=  %=

                            x = x+3  --> Eşittir operatörü sağdaki değeri sola atar.

                            x = x+3  ==  x +=3;     iki ifadede birbirine eşittir.

                            */

int main()
{
    /*
        += --> Bir fazlasını atar
        -= --> Bir eksiğini atar
    */

    int arithmetic = 25;
    printf("The variable arithmetic, plus three is equal to = %d\n",arithmetic +=3);
    printf("The variable arithmetic, multiplication with three is equal to = %d",arithmetic *=3);

    return 0;
}