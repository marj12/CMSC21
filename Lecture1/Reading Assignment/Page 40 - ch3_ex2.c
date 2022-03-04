//Page 40
//* Prints int and float values in various formats * /

#include <stdio.h> //directive

int main(void) //main function
{
    int i; //declare i
    float x; //declare x as float

    i = 40;
    x = 839.21f;

    //the variables above are assigned specific values

    printf("|%d|%5d|%-5d|%5.3d|\n", i,i,i,i); //%d is the conversion specifier used in i because it is an integer
    printf("|%10.3f|%10.3e|%-10g|\n", x,x,x);  //%f,%g,%e is the conversion specifier used in x because it is floating number

    //in the first and second print statement, some conversion specifications were used.
    //the specifications used the format %m.pX where m is the min # of characters while p is the max # 

    //%d is just the same result with the original value while %5d must have 5 characters so three characters were added before the number
    // in the case of %-5d the spaces were added after the number because of the minus sign

    //%10.3f means it must have 10 digits and 3 decimal places so a zero was added to the decimal and spaces were added before the number
    //%10.3e requires 10 characters and the exponent
    //%-10g  means it must have 10 digits and were added after the number because of the minus sign

    return 0;
}
