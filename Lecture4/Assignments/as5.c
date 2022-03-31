//Lecture 4 - 5

#include <stdio.h>

int main(void){

    int i, n, start;

    printf("Enter number of days in month: ");
    scanf("%d", &n);

    if (n <= 31 && n >= 28){ //validate date entered

        printf("Enter the starting day of the week (1=Sun,......, 7=Sat): ");
        scanf("%d", &start);

        printf("CALENDAR \n");
        printf("Sun\tMon\tTue\tWed\tThur\tFri\tSat\n");

        for(i = 1; i < start; i++){ //print necessary space
            printf("\t");
        }
        for(i = 1; i <= n; i++){ //increment i and print it
            printf("%d\t", i);
            if((start+i-1)%7 == 0){ //when remainder is 0 it moves to another row
                printf("\n");
            }
        }
    }
    else{
        printf("Invalid number of days entered. Please try again.");
    }
    
}