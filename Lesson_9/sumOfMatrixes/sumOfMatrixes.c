#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i = 0, m = 0;
    int matrix1[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    
    int matrix2[3][3] = { {9,8,7} , {6,5,4} , {3,2,1} };
    
    int matrix3[3][3];
    
    
    while(i<3){
        
        matrix3[i][m] = matrix1[i][m] + matrix2[i][m];
        m++;
        if(m==3){
            m=0;
            i++;
        }
        
    }
    
    i=0;
    m=0;
    while(i<3){
        printf("%d  ",matrix3[i][m]);
        m++;
        if(m==3){
            m=0;
            i++;
        }
    }
    
    return 0;
}