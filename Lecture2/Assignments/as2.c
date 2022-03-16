//Lecture 2 - 2

#include <stdio.h>

int main(void){

    int d1, d2, d3; //d1 represents 1st digit, d2 represents the 2nd digit, & d3 the 3rd digit

    printf("Enter a three-digit number:");
    scanf("%1d%1d%1d", &d1,&d2,&d3);

    printf("Reverse: %d%d%d", d3,d2,d1); //print the 3rd digit first then followed by the 2nd digit then  3rd digit so that the output is the reverse
}