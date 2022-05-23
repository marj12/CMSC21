#include <stdio.h>
#include <ctype.h>  /* toupper, isalpha */
#include <stdbool.h>
#include <stdlib.h>

int i, occurences1[26] = {0}, occurences2[26] = {0};

void scan_word(int occurrences[26]){
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurences1[26], int occurences2[26]){
    for (i = 0; i < 26; i++) {
        if (occurences1[i] != occurences2[i]){
            return false;
        }
    }
}


int main(void)  {
    
    printf("Enter first word:");
    scan_word(occurences1);

    printf("Enter second word:");
    scan_word(occurences2);

    if (is_anagram(occurences1, occurences2)) {
        printf("The words are anagrams. \n");
        return 0;
    }
    printf("The words are not anagrams. \n");
    return 0;
    
}