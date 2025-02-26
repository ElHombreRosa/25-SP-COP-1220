#include <stdio.h>
#include <ctype.h>

#define NUM_EMPLOYEE 3

int main(){
    double sales_amounts_array[] = {0};
    char salespersons_array[NUM_EMPLOYEE]  = {'D', 'E', 'F'};

    char salesperson;
    double sales_amount;

    while(1) { // Loop to keep taking user input till they exit with Z
        printf("Sales Person Initials: (D, E, F, & Z To End Application): ");
        scanf(" %c", &salesperson);
        salesperson = toupper(salesperson);  // Convert lowercase letters to uppercase to keep consistency

        if (salesperson == 'Z'){ // End loop from users input Z
            break;
        }

        // Check if users input is valid 
        int input = -1;
        for (int i = 0; i < NUM_EMPLOYEE; i++) {
            if(salesperson == salespersons_array[i]){
                input = i;
                break;
            }
        }
        // equality 
        if (input == -1){
            printf("    Intermediate Output: Error, Invalid Salesperson Selected, Please Try Again\n");
            continue;
        }

        printf("Sales ($): "); // Validate input of sales_amount 
        if (scanf("%lf", &sales_amount) != 1 || sales_amount < 0) {  
            printf("    Intermediate Output: Error, Invalid Sale's Amount, Please Try Again\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        sales_amounts_array[input] += sales_amount;
    }


    // Display each salespersons total sales
    printf("\nEach Person's Total Sales:\n");
    for (int i = 0; i < NUM_EMPLOYEE; i++) {
        printf("%c: $%.2lf\n", salespersons_array[i], sales_amounts_array[i]);
    }


    // Calculate grand total
    double grand_total = 0;
    for (int i = 0; i < NUM_EMPLOYEE; i++) {
        grand_total += sales_amounts_array[i];
    }
    printf("\nGrand Total: $%.2lf\n", grand_total);


    // Salesperon with Highest Sales
    double highest_sale = sales_amounts_array[0];
    for (int i = 1; i < NUM_EMPLOYEE; i++) {
        if (sales_amounts_array[i] > highest_sale) {
            highest_sale = sales_amounts_array[i];
        }
    }


    //Display Highest Salesperson
    printf("Highest Sale: ");
    for (int i = 0; i < NUM_EMPLOYEE; i++){
        if (sales_amounts_array[i] == highest_sale){
            if (salespersons_array[i] == 'D') printf("Danielle ");
            if (salespersons_array[i] == 'E') printf("Edward ");
            if (salespersons_array[i] == 'F') printf("Francis ");
        }
    }
    printf("\n");
     

    return 0; 
}