//Lecture 3 - 1

#include <stdio.h>

int main(void){

    int age;

    printf("Enter age:");
    scanf("%d", &age);

    if (13 <= age && age <= 19){ // simplify the two statements into one by merging it using AND operator
        teenager = true;
    }
    else {
        teenager = false;
    }
}
