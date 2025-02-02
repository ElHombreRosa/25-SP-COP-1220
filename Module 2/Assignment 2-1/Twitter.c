#include <stdio.h>
#include <string.h>

#define message_length 140

int main(void){
    char user_message[150]; // allows more than 140 

    scanf("%149[^\n]", user_message); // read users input , as well avoid overflow

    if (strlen(user_message) <= message_length){ // If user message is less than or equal to message length (140 char)
        printf("Posted\n"); // post the message 
    }   else {
        printf("Rejected\n"); // over 140 char reject message
    }

    return 0;
}