//Lecture 13 Structures

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* structure */
struct line{        
    float slope;
    struct midpoint
    {
        float abscissa;
        float ordinate;
    }coordinates;
    double distance;
    struct point
    {
        float x;
        float y;
    }point_1, point_2;
}equation;

/* function to solve for slope */
float solveSlope(struct line equation){
    /* use given formula */
    float y = equation.point_1.y - (equation.point_2.y);
    float x = equation.point_1.x - (equation.point_2.x);
    float slope = y/x;  
    return slope;
}

/* function to solve for midpoint */
float* solveMidpoint(struct line equation){
    /* use given formula */
    float x = (equation.point_1.x + equation.point_2.x)/2;
    float y = (equation.point_1.y + equation.point_2.y)/2;
    /* use array to return multiple values and acces it thru pointers */
    float *mid = (float*) malloc(sizeof(float) * 2);    /* allocate memory */
	*mid = x;
	*(mid + 1) = y;
    return mid;
}

/* function to solve for distance */
double solveDistance(struct line equation){
    /* use given formula */
    float x = (equation.point_1.x - equation.point_2.x);
    float y = (equation.point_1.y - equation.point_2.y);
    float squared = ((x*x) + (y*y));
    double x2plusy2 = squared;
    double distance = sqrt(x2plusy2);   /* use sqrt function from math.h */
    return distance;
}

/* function to solve for the slope intercept form */
void slopeInterceptForm(struct line equation){
    /* to solve for b */
    /* b = y - mx */
    float b = equation.point_1.y - (equation.slope*equation.point_1.x);
    printf("\ny = %.2fx + %.2f", equation.slope, b);
}

int main(void){

    float slope, distance;

    /* store values in the structure members so we can access it later on */
    printf("Enter coordinates of point 1: ");
    scanf ("%f %f", &equation.point_1.x, &equation.point_1.y);    

    /* store values in the structure members so we can access it later on*/
    printf("Enter coordinates of point 2: ");
    scanf ("%f %f", &equation.point_2.x, &equation.point_2.y);

    /* call slope function & store its value to the structure member slope so we can access it later on*/
    slope = solveSlope(equation);
    equation.slope = slope;
    printf("Slope: %.2f", equation.slope);

    /* access array values using pointers */
    float *middle = solveMidpoint(equation);
    /* store values into the structure member so we can access it later on */
	equation.coordinates.abscissa = *middle;
	equation.coordinates.ordinate = *(middle + 1);
	printf("\nMidpoint: %.2f %.2f", equation.coordinates.abscissa, equation.coordinates.ordinate);

    /* call distance function & store its value to the structure member distance so we can access it later on*/    
    distance = solveDistance(equation);
    equation.distance = distance;
    printf("\nDistance between 2 points: %.2f", equation.distance);

    /* call slope intercept form function */
    slopeInterceptForm(equation);
}
