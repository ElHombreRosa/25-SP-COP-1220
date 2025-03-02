#include <stdio.h>

#define min_temp -30
#define max_temp 130
#define user_input_temp 5
// Function to get and validate temp from users input 
void getting_temperature(int *temp) {
    while(1){
        printf("Temperature: ");
        scanf("%d", temp);
        if(*temp >= min_temp && *temp <= max_temp) { //check if temp valid between min_temp and max_temp 
            break;
        }
        printf("Temperature %d is invalid, Please enter a valid temperature between %d and %d. \n", *temp,min_temp,max_temp); // for invalid temps , loops again
    }
}
// Function to check if the temp is warming , cooling , or mixed 
void checking_temperature(int hot_or_cool[], int five_inputs) {
    int warming = 1, cooling = 1;
    for(int i = 1; i < five_inputs; i++){ // loop through temp array 
        if (hot_or_cool[i] <= hot_or_cool[i - 1]) {
            warming = 0; // temp not increasing , not warming 
        }
        if (hot_or_cool[i] >= hot_or_cool[i - 1]) {
            cooling = 0; // temp not decreasing , not cooling 
        }
    }
    if (warming){
        printf("Getting warmer\n");
    } else if (cooling){
        printf("Getting cooler\n");
    } else {
        printf("It's a mixed bag\n");
    }

}

int main(void){
    int all_temperatures[user_input_temp]; // array to hold 5 temps from user
    for(int i = 0; i < user_input_temp; i++){ // loop the 5 inputs from the user , validation 
        getting_temperature(&all_temperatures[i]);
    }
    checking_temperature(all_temperatures, user_input_temp); // check if temps warming, cooling, mix through function

    printf("5-day Temperature [");
    for(int i = 0; i < user_input_temp; i++){  // print out each temp
        printf("%d", all_temperatures[i]);
        if( i < user_input_temp - 1) { // add comma between temp
            printf(", ");
        }
    }
    printf("]\n");

    int total = 0; // calc the total of all temp input 
    for (int i = 0; i < user_input_temp; i++){
        total += all_temperatures[i];
    }
    printf("Average Temperature is %.1f degrees\n", total / (float)user_input_temp); // average temp from total

    return 0;
}