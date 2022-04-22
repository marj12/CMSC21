//Long Exam 1 - 9

#include <stdio.h>

int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    while(cont = 'y'){ 
        printf("Enter square size:"); //side of the square
        scanf("%d", &size);

        for( row = 0 ;row < size ; row++){ //iterate until row is the same as size
            for(column = 0 ; column < size ;column++){ //iterate until column is the same as size
                if (row == 0 || row == size-1 || column == 0 || column == size-1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }

        printf("Print another square? Enter y or n: "); //ask user to print again
        scanf("%c", &cont);

        if (cont == 'n'){ // if n then program ends
        printf("END");
        }else if (cont != 'n'){
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: ");
            scanf("%c", &cont); // if y then program continues to iterate
        }
    }

return 0;
}
