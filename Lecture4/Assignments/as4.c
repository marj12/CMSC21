//Lecture 4 - 4

#include <stdio.h>

int main(void){

    int i = 1, n, result = 1;

    printf("TABLE OF POWERS OF TWO \n");
    printf("\n");
    printf(" n      2 to the n \n");
    printf("---  ---------------\n");
    
    printf(" 0          1\n"); //special case for 0

    for(i = 1; i <= 10; i++){
        result *= 2;
        printf(" %d          %d\n", i, result);
    }
}