#include <stdio.h>
#include <string.h>

void pig_latin_transalor(char *word) {
    if(strchr("aeiouAEIOU", word[0])){ // check first character if its a lower or uppercase vowel 
        printf("%syay ", word); // if it does add yay to the end 
    } else {
        int i = 0; // if it starts with a consonant , find the first vowel
        while (word[i] && !strchr("aeiouAEIOU", word[i])) i++; // move consonant to the end and add ay 
        printf("%s%.*say ", &word[i], i, word); // %s prints the firsy vowel and %.*s print the first i , consonant moves to the end 
    }
}

int main() {
    char user_sentence[9999], *word; //create string for user input
    fgets(user_sentence, sizeof(user_sentence), stdin); // read input from user
    user_sentence[strcspn(user_sentence, "\n")] = 0; // removes tailing newline char 

    word = strtok(user_sentence, " ");
    while (word){ // loop till no words left 
        pig_latin_transalor(word);
        word = strtok(NULL, " "); // get next word 
    }
    return 0;
}