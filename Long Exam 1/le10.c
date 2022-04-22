//long Exam 1- 10

#include <stdio.h>
#include <math.h>

int main(){

    double x, root, y, result; //specify values as double data type
    
    printf("Enter number to find its square root:"); //for square root
    scanf("%lf", &x);

    printf("Enter number to find its absolute value:"); //for absolute value
    scanf("%lf", &y);

    //sqrt function
    root = pow(x, 0.5);
    printf("The Square Root of %.2lf is %.2lf.\n", x, root);

    //fabs function
    result = fabs(y);
    printf("Absolute value of %.2lf is %.2lf\n", y, result); //print absolute value
}