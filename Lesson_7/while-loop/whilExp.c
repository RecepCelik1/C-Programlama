#include <stdio.h>


int main() {
    int i = 1,num;
    printf("please enter a number : "); scanf("%d",&num);
    while(i<=10){
        printf("%d\n",i*num);
        i++;
    }

    return 0;
}