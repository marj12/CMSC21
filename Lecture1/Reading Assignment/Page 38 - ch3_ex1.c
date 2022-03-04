//Page 38

#include <stdio.h> //directive

int main(void){ //main function
	
    int i,j ; //declare i and j as integers 
    float x,y ; //declare x and y as float 
	
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    //the variables above are assigned specific values. x and y are decimals and have f at the end because they belong to the float type

    printf("i = %d, j = %d, x = %f, y = %f\n", i,j,x,y); //print function is used to print the values above and it has 5 arguments

    //%d is the conversion specifier used in i and j because they are integers while %f are used in x and y because they are float numbers
    //the conversion specifier is then replace by the values to be printed in the order they appear in the print statement
    
}
