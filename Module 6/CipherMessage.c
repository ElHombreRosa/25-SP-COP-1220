#include <stdio.h>
#include <string.h>

void CaesarCipher (char text[], int shift) {
    int i = 0;
    char ch;


    while (text[i] != '\0') {
        ch = text[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - shift + 26) % 26) + 'A'; // encrypt uppercase
        }
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - shift + 26) % 26) + 'a'; // encrypt lowercase
        }

        text[i] = ch;
        i++;
    }
}

int main() {
    char text [1000];
    char nonencrypt [1000];
    int shift;

    fgets(text, sizeof(text), stdin); // get full input 
    text[strcspn(text, "\n")] = '\0'; // remove new line 

    strcpy(nonencrypt, text); // save original text 
    scanf("%d", &shift);

    CaesarCipher(text , shift); // Applied Cipher
    // output
    printf("Text: %s\n", nonencrypt);
    printf("Shift: %d\n", shift);
    printf("Cipher: %s\n", text);

    return 0;
}