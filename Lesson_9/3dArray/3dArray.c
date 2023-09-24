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



                                   / array[2][0][0] = 18
                  / array[2][0][] <
                 /                 \ array[2][0][1] = 19
                / 
               /                   / array[2][1][0] = 20
array[2][][]  <     array[2][1][] <
               \                   \ array[2][1][1] = 21
                \
                 \                 / array[2][2][0] = 22
                  \ array[2][2][] <
                                   \ array[2][2][1] = 23



                                   / array[3][0][0] = 23
                  / array[3][0][] <
                 /                 \ array[3][0][1] = 24
                / 
               /                   / array[3][1][0] = 25
array[3][][]  <     array[3][1][] <
               \                   \ array[3][1][1] = 26
                \
                 \                 / array[3][2][0] = 27
                  \ array[3][2][] <
                                   \ array[3][2][1] = 28



    */


                //  Matris gösterimi ise şu şekildedir
   
   
    /*     [0] [1]       [0] [1]        [0] [1]         [0] [1]
         ----------    ---------      ----------      ----------
    [0]  |  2  3  |    |  6  7 |      | 18  19 |      | 23  24 |
    [1]  |  4  5  |    |  8  9 |      | 20  21 |      | 25  26 |
    [2]  | 10  11 |    | 14  15|      | 22  23 |      | 27  28 |
         ----------    ---------      ----------      ----------
          array[0]      array[1]       array[2]        array[3]
   
   */


    return 0;



}