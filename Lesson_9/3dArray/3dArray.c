#include <stdio.h>
#include <stdlib.h>

                                    // 3d Arrays

int main(){

    /*  #iki boyutlu dizilerde matris oluşturup sakladık. Üç boyutlu dizilerde ise matrisleri yazıp saklarız. 

        #Aşağısı buna bir örnek iki tane matris saklanıyor o üç boyutlu dizide.    
    */


    int array[4][3][2] = {  { {2,3} , {4,5} , {10,11} }  ,  { {6,7} , {8,9} , {14,15} }  ,  { {18,19} , {20,21} , {22,23} }  ,         { {23,24} , {25,26} , {27,28} }  };     //hadi şemasını çizelim.

    /*         
                                   / array[0][0][0] = 2
                  / array[0][0][] <
                 /                 \ array[0][0][1] = 3
                / 
               /                   / array[0][1][0] = 4
array[0][][]  <     array[0][1][] <
               \                   \ array[0][1][1] = 5
                \
                 \                 / array[0][2][0] = 10
                  \ array[0][2][] <
                                   \ array[0][2][1] = 11



                                   / array[1][0][0] = 6
                  / array[1][0][] <
                 /                 \ array[1][0][1] = 7
                / 
               /                   / array[1][1][0] = 8
array[1][][]  <     array[1][1][] <
               \                   \ array[1][1][1] = 9
                \
                 \                 / array[1][2][0] = 14
                  \ array[1][2][] <
                                   \ array[1][2][1] = 15



                                   / array[0][0][0] = 2
                  / array[0][0][] <
                 /                 \ array[0][0][1] = 3
                / 
               /                   / array[0][1][0] = 4
array[0][][]  <     array[0][1][] <
               \                   \ array[0][1][1] = 5
                \
                 \                 / array[0][2][0] = 10
                  \ array[0][2][] <
                                   \ array[0][2][1] = 11



                                   / array[0][0][0] = 2
                  / array[0][0][] <
                 /                 \ array[0][0][1] = 3
                / 
               /                   / array[0][1][0] = 4
array[0][][]  <     array[0][1][] <
               \                   \ array[0][1][1] = 5
                \
                 \                 / array[0][2][0] = 10
                  \ array[0][2][] <
                                   \ array[0][2][1] = 11



    */

    return 0;



}