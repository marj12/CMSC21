//Long Exam 1 - 8

#include <stdio.h>

int main(void){

    int a,b;

    printf("Enter value of a:");
    scanf("%d", &a); //enter value of a

    printf("Enter value of b:");
    scanf("%d", &b); //enter value of b

    //use if-else statements to easily produce the outputs needed.

    //A
    if (a==2 && b==3){ //first output //compare
        printf( "a. *****, >>>>>, <<<<<\n" ); //don't forget to use  escape character so the next output is printed on the next line
    }else{ 
        printf( "-----, >>>>>, <<<<<\n" );
    }

    //B
    if (a==2 && b==3){ //second output
        printf( "b. *****\n" );
    }else{ 
        printf( "-----, >>>>>, <<<<<\n" );
    }

    //C
    if (a==2 && b==3){ //third output
        printf( "c. *****, <<<<<\n" );
    }else{ 
        printf( "-----, >>>>>, <<<<<\n" );
    }
}
