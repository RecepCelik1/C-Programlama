#include <stdio.h>


int main() {
    int firstNum,lastNum;
    printf("please enter first number : "); scanf("%d",&firstNum);
    printf("please enter last number : "); scanf("%d",&lastNum);
    if(firstNum % 2 == 0){
        
        while(firstNum <= lastNum){
            printf("%d\n",firstNum);
            firstNum = firstNum + 2;
        }    
    } else {
        while(firstNum <= lastNum){
            printf("%d\n",firstNum);
            firstNum = firstNum + 2;
        }
    }
    

    return 0;
}