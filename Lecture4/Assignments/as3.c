//Lecture 4 - 3

#include <stdio.h>

int main(void)
{
    int i;

    //for statement
    for(i = 1; i <= 128; i *= 2){
        printf("%d ", i);
    }

    printf("\n");

    //while statement
    i = 1;
    while(i <= 128){
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}