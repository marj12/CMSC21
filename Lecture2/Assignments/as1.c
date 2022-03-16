//Lecture 2 - 1

#include <stdio.h>

int main(void){

    int d1, d2; //d1 represents 1st digit while d2 represents the 2nd digit

    printf("Enter a two-digit number:");
    scanf("%1d%1d", &d1,&d2);

    printf("Reverse: %d%d", d2,d1); //print the 2nd digit first then followed by the first digit so that the output is the reverse
}
