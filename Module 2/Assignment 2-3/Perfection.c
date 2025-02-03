#include <stdio.h>

int main(){

    int num,  sum = 0;
    scanf("%d", &num); // users input 

    for (int i = 1; i < num; i++){ // check all numbers less than num for divisors 
        if(num % i == 0){ // checks if i is a divisor
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("%d Perfect Number\n", num);
    else
        printf("%d Not A Perfect Number\n", num);

    return 0;
}