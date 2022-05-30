/*Check planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",     //array of pointer planets
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc; i++) {                //program visits each string in the command line
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(argv[i], planets[j]) == 0) {     //compare the planet name sinto the array to find for a match
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
            if (j == NUM_PLANETS)
                printf("%s is not a planet\n", argv[i]);                       
    }

    return 0;
}
