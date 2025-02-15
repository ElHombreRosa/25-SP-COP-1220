#include <stdio.h>
#include <ctype.h>

int sumOfTwoNumbers(int x, int y) {
    int sum = x + y;
    return sum;
}

int determineValueOfInt (){
    int input = 0;
    printf("Please Enter a Number between 1 and 10: ");
    scanf("%d", &input);

    if(!isdigit(input)){
        printf("This is not a number, please try again.");
        determineValueOfInt(input);

    }
}

int main(void) {
    printf("The number is %d", determineValueOfInt());

    return 0;
}