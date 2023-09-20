#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    /*  ceil  floor  sqrt  pow  abs
    
    * ceil (tavan demek) = 4.8 = 5.0 
    
    * floor (taban) = 4.8 = 4.0
    
    * sqrt (kare) = karekök alma
    
    * pow (üs) = üs alma
    
    * abs (absolute = tam, mutlak) = mutlak değere alma
    
    */
    
    printf("%.3f \n",ceil(4.5));
    
    printf("%.3f \n",floor(4.5));
    
    printf("%.3f \n",sqrt(4.5));
    
    printf("%.3f \n",pow(4.5,2));

    printf("%d \n",abs(6)); //abs yalnızca integer sayılar ile çalışabilir.
    
    return 0;
}