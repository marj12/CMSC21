//Long Exam 1 - 8

#include <stdio.h>

int main(void){

    int a,b;

    printf("Enter value of a:");
    scanf("%d", &a); 

    printf("Enter value of b:");
    scanf("%d", &b);

    //A
    if (a==2 && b==3){
        printf( "a. *****, >>>>>, <<<<<\n" );
    }else{ 
        printf( "-----, >>>>>, <<<<<\n" );
    }

    //B
    if (a==2 && b==3){
        printf( "b. *****\n" );
    }else{ 
        printf( "-----, >>>>>, <<<<<\n" );
    }

    //C
    if (a==2 && b==3){
        printf( "c. *****, <<<<<\n" );
    }else{ 
        printf( "-----, >>>>>, <<<<<\n" );
    }
}
