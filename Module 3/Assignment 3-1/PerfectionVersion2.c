#include <stdio.h>

int perfectNumber(){
    int num , sum = 0;
    scanf("%d", &num); // users input 
    for (int i = 1; i < num; i++){ // check all numbers less than num for divisors 
        if(num % i == 0){ // checks if i is a divisor
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("Perfect Number\n");
    else
        printf("Not A Perfect Number\n");
}

int main(void) {
    perfectNumber();
    return 0;
}