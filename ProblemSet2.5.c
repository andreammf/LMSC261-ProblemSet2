
#include <stdio.h>

int main(void) 
{
    int stacks = 8;
    for(int i=1; i<=stacks; i++) {
        for(int j=1; j<=i; j++) {
            printf("#");
        }
        printf("\n");
    }
}



