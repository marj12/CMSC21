//Page 46-47
// * Adds two fractions * /

#include <stdio.h> //directive

int main(void) //main function
{
    int num1, denom1, num2, denom2, result_num, result_denom; //declare variables as int

    printf("Enter first fraction: "); //ask for user input
    scanf("%d/%d" , &num1, &denom1); //scans user input and assigns value to num1 and denom1

    printf("Enter second fraction: "); //ask for user input
    scanf("%d/ %d" , &num2, &denom2); //scans user input and assigns value to num1 and denom1

    result_num = num1 * denom2 + num2 * denom1; //computes for the result
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom); //prints the result
    //the %d is replace by the values to be printed in the order they appear in the print statement
    //%d is used because the values are integers

    return 0;
}
