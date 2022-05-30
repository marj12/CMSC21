/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */ 
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND] [MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n"); //if reminders reach 50 already
            break;
        }

        printf("Enter day and reminder: "); //ask for day & reminder
        scanf("%2d", &day); //store day
        if (day == 0)   //if initial input is 0 program will exit
            break;
        sprintf(day_str, "%2d", day); //convert day input into string   %2d makes sure that the program only reads the first 2 digits of the input
        read_line(msg_str, MSG_LEN);    //call the read_line function to read the reminders

        for (i = 0; i < num_remind; i++){
            if (strcmp(day_str, reminders[i]) < 0)  //compare where the day belongs
                break;
        }
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);   //move all strings below where the day belong pont down one position
        
        strcpy(reminders[i], day_str);  //copy day into array
        strcat(reminders[i], msg_str); //append reminder to day

        num_remind++;
    }

    printf("\nDay Reminder\n");     //print the reminders
    for (i = 0; i < num_remind; i++)
        printf(" %s", reminders[i]);
    return 0;
}

int read_line(char str[], int n)    //function to read the reminders
{
    int ch, i = 0;

    while (ch != '\n'){
        if (i < n){
            ch = getchar();
            str[i] = ch;  //store every character in the string in the array str
            i++;    
        }
    }
    str[i] = '\0';
    return i;
}
