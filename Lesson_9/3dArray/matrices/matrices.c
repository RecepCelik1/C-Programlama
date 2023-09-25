#include <stdio.h>
#include <stdlib.h>

int main() {

    int matrices[2][3][2];
    int i = 0, j = 0, k = 0;
    
    for(i = 0; i<2; i++){
        
        for(j = 0; j<3; j++){
            for(k = 0; k<2; k++){
                printf("Please enter a number [%d] [%d] [%d] : ",(i+1) , (j+1) , (k+1));
                scanf("%d",&matrices[i][j][k]);
            }
        }
    }

    printf("\n\n");
    
    for(i = 0; i < 2; i++){

        for(j = 0; j < 3; j++){
            for(k = 0; k < 2; k++){

                printf("%d  ",matrices[i][j][k]);

            }
            printf("\n");
        }

    printf("\n\n\n");

    }

    return 0;
}