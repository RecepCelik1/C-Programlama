#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numbers[3], i = 0;
    printf("Please enter three number\n");
    
    while(i<3){
        if(i==1){
            printf("Please enter your first number : ");
            scanf("%d",&numbers[i]);
        }
        if(i==2){
            printf("Please enter your second number : ");
            scanf("%d",&numbers[i]);
        }
        if(i==3){
            printf("Please enter your third number : ");
            scanf("%d",&numbers[i]);
        }
        i++;
    }
    
    i=0;

    while(i<3){
        printf("%d\n",numbers[i]);
        i++;
    }

    return 0;
}