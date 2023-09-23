#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //defining to variables statement

    int i = 0, m = 0;
    int matrix1[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };
    
    int matrix2[3][4] = { {12,11,10,9} , {8,7,6,5} , {4,3,2,1} };
    
    int matrix3[3][4];
    
    
    
    while(i<3){     //for sum of matrixes
        
        while(m<4){
        matrix3[i][m] = matrix1[i][m] + matrix2[i][m];
        m++;
        }
        m=0;
        i++;
        
    }
    
    i=0;
    m=0;
    while(i<3){     //for print to matrix3 
       
       while(m<4){
        printf("%d  ",matrix3[i][m]);
        m++;
       }
       printf("\n");
       m=0;
       i++;
    }
    
    return 0;
}