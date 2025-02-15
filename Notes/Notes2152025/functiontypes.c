#include <stdio.h>

void printName() {
    char input[] = "John";

    for (int i = 0; i < 4; i++) {
        // exit conditon
        if( i == 2) {
            break;
        }

        // happy path
        printf("%c\n", input[i]);
    }
}

int sumOfTwoNumbers(int x, int y) {
    int sum = x + y;
    return sum;
}

int main(void) {
    //int firstNumber, secondNumber = 0;
    int firstNumber = 6;
    int secondNumber = 6;

    printf("%d", sumOfTwoNumbers(firstNumber, secondNumber));

    return 0;
}