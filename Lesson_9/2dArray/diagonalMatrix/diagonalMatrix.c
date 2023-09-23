#include <stdio.h>
#include <stdlib.h>

int main(){
    int k = 0, l = 0, m = 0;
    int mat[10][10];
    
    for(k=0; k<10; k++){
        mat[k][k]=(m=k+1);
        for(l=0;l<10;l++){
            if(k==l){
                continue;
            }
            mat[k][l] = 0;
        }

    }

    for(k=0; k<10; k++){
        for(l=0; l<10; l++){
            printf("%d  ",mat[k][l]);
        }
        printf("\n\n");
    }
    return 0;
}