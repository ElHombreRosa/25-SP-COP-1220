#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM_EMPLOYEE 3

typedef struct SalesPerson {  // Def struct of named SalesPerosn to hold each persons data 
    char initial;
    char name[20];
    double sales;
} SalesPerson;

int main() {
    SalesPerson salespeople[NUM_EMPLOYEE] = { // Set up of struct for each person
        {'D', "Danielle", 0.0},
        {'E', "Edward", 0.0},
        {'F', "Francis", 0.0}
    };

    char salesperson_input;
    double sales_amount;

    while (1) { // Loop to keep taking user input till they exit with Z
        printf("Sales Person Initials: (D, E, F, & Z To End Application): ");
        scanf(" %c", &salesperson_input);
        salesperson_input = toupper(salesperson_input); // Convert lowercase letters to uppercase to keep consistency

        if (salesperson_input == 'Z') { // End loop from users input Z
            break;
        }
        // Check if users input is valid 
        int index = -1;
        for (int i = 0; i < NUM_EMPLOYEE; i++) {
            if (salesperson_input == salespeople[i].initial) {
                index = i;
                break;
            }
        }
        // equality 
        if (index == -1) {
            printf("    Intermediate Output: Error, Invalid Salesperson Selected, Please Try Again\n");
            continue;
        }

        printf("Sales ($): "); // Validate input of sales_amount 
        if (scanf("%lf", &sales_amount) != 1 || sales_amount < 0) {
            printf("    Intermediate Output: Error, Invalid Sale's Amount, Please Try Again\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        salespeople[index].sales += sales_amount;
    }

    // Display each salespersons total sales
    printf("\nEach Person's Total Sales:\n");
    for (int i = 0; i < NUM_EMPLOYEE; i++) {
        printf("%s (%c): $%.2lf\n", salespeople[i].name, salespeople[i].initial, salespeople[i].sales);
    }

    // Calculate grand total
    double grand_total = 0;
    for (int i = 0; i < NUM_EMPLOYEE; i++) {
        grand_total += salespeople[i].sales;
    }
    printf("\nGrand Total: $%.2lf\n", grand_total);

    // Salesperon with Highest Sales
    double highest_sale = salespeople[0].sales;
    for (int i = 1; i < NUM_EMPLOYEE; i++) {
        if (salespeople[i].sales > highest_sale) {
            highest_sale = salespeople[i].sales;
        }
    }

    // Display Highest Salesperson
    printf("Highest Sale: ");
    for (int i = 0; i < NUM_EMPLOYEE; i++) {
        if (salespeople[i].sales == highest_sale) {
            printf("%s ", salespeople[i].name);
        }
    }
    printf("\n");

    return 0;
}