#include <stdio.h>

#define min_temp -30
#define max_temp 130

void getting_temperature(int temp) {
    while(1){
        printf("Temperature: ");
        scanf("%d", temp);
        if(temp >= min_temp && temp <= max_temp) {
            break;
        }
        prinf("Temperature %d is invalid, Please enter a valid temperature between %d and %d. \n", temp,min_temp,max_temp);
    }
}