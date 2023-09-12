
                                                    /*Data Types*/


    /*
        **Basic Data Types == int, char, float, double

        **Derived Data Types == array, pointer, structure, union

        **Enumeration Data Type == enum

        **Void Data Type == void
    
    */

   /*
        *int (4 bytes) | %d
   
        *double (8 bytes) | %lf
   
        *float (4 bytes) | %f

        *char (1 byte) | %c  it can only contain one character.
   */
 

#include <stdio.h>
#include <stdlib.h>

int main() {

    float a = 5.65;
    char c = 'A';


    printf("%f \n",a);

    printf("%.3f \n",a); //%f operatöründe f ten önceki sayıya dikkat

    printf("%c", c);

    return 0;
}