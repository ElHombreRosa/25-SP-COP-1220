#include <stdio.h>
#include <string.h>

#define message_length 140

int main(void){
    char user_message[150];

    scanf("%149[^\n]", user_message);

    if (strlen(user_message) <= message_length){
        printf("Posted\n");
    }   else {
        printf("Rejected\n");
    }

    return 0;
}