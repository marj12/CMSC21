//Lecture 4 - 2

#include <stdio.h>

int main(void){

    int i = 1;          // if you plug in 1 as i it produces the same value but if you plug in numbers > 10, statements a and b will not execute but c will.

    //a
    while(i < 10){
        printf("%d", i++);
    }
    printf("\n");

    //b
    i = 1;
    for(;i < 10; ){
        printf("%d", i++);
    }
    printf("\n");

    //c
    i = 1; 
    do{
        printf("%d", i);
        i++;
    }while(i < 10);
}