#include <stdio.h>
#include <stdlib.h>

int main() {

    int matrices[2][3][2];
    int i = 0, j = 0, k = 0;
    
    while(i<2){
        
        for(j = 0; j<3; j++){

            for(k = 0; k<2; k++){
                printf("Please enter a number [%d] [%d] [%d]:   ",(2-i) , (3-j) , (2-k));
                scanf("%d",&matrices[i][j][k]);
            }
        
        }
    }

    return 0;
}