#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 22;

    printf("The variable age takes up %d bytes of space in memory.", sizeof(age));

    printf("\nThe variable double takes up %d bytes of space in memory.", sizeof(double));

    
    return 0;
}
