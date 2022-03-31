//Lecture 3 - 1

#include <stdio.h>

int main(void){

    int first, second;

    printf("Enter a two-digit number:");
    scanf("%1d%1d", &first, &second); //split digits into two numbers
    
    printf("Number entered in words: ");
    
    if (first == 1 && second == 0){printf("ten");} //special conditions for numbers 10-19
    else if (first == 1 && second == 1){printf("eleven");}
    else if (first == 1 && second == 2){printf("twelve");}
    else if (first == 1 && second == 3){printf("thirteen");}
    else if (first == 1 && second == 4){printf("fourteen");}
    else if (first == 1 && second == 5){printf("fifteen");}
    else if (first == 1 && second == 6){printf("sixteen");}
    else if (first == 1 && second == 7){printf("seventeen");}
    else if (first == 1 && second == 8){printf("eighteen");}
    else if (first == 1 && second == 9){printf("nineteen");}
    else{
        switch(first){ //use switch case for numbers 20-99; first digit
            case 2 : printf("twenty"); break; 
            case 3 : printf("thirty"); break; 
            case 4 : printf("forty"); break; 
            case 5 : printf("fifty"); break; 
            case 6 : printf("sixty"); break; 
            case 7 : printf("seventy"); break; 
            case 8 : printf("eighty"); break; 
            case 9 : printf("ninety"); break;
        }
        switch(second){ //second digit
            case 0 : printf(""); break;
            case 1 : printf("-one"); break;
            case 2 : printf("-two"); break;
            case 3 : printf("-three"); break;
            case 4 : printf("-four"); break;
            case 5 : printf("-five"); break;
            case 6 : printf("-six"); break;
            case 7 : printf("-seven"); break;
            case 8 : printf("-eight"); break;
            case 9 : printf("-nine"); break;
        }
    }
}


