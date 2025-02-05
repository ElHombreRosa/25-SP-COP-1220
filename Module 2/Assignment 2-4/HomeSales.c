#include <stdio.h>
#include <ctype.h>

int main(){
    int sales_D = 0, sales_E = 0, sales_F = 0;
    double sales_amount;
    char salesperson;

    while(1) {
        printf("Sales Person Initials: (D, E, F, & Z To End Application): ");
        scanf(" %c", &salesperson);
        salesperson = toupper(salesperson);

        if (salesperson == 'Z'){
            break;
        }

        if(salesperson != 'D' && salesperson != 'E' && salesperson != 'F') {
            printf("    Intermediate Output: Error, Invalid Salesperson Selected, Please Try Again\n");
            continue;
        }

        printf("Sales ($): ");
        if (scanf("%lf", &sales_amount) != 1 || sales_amount < 0) {  
            printf("    Intermediate Output: Error, Invalid Sale's Amount, Please Try Again\n");
            while (getchar() != '\n');
            continue;
        }

        if (salesperson == 'D') {
            sales_D += sales_amount;
        } else if (salesperson == 'E') {
            sales_E += sales_amount;
        } else if (salesperson == 'F'){
            sales_F += sales_amount;
        }
    }

    printf("\nEach Person's Total Sales:\n");
    printf("D: $%d\n", sales_D);
    printf("E: $%d\n", sales_E);
    printf("F: $%d\n", sales_F);

    int grand_total = sales_D + sales_E + sales_F;
    printf("\nGrand Total: $%d\n", grand_total);

    int highest_sales = (sales_D > sales_E) ? ((sales_D > sales_F) ? sales_D : sales_F) : ((sales_E > sales_F) ? sales_E : sales_F);
    printf("Highest Sale: ");
    if (sales_D == highest_sales) printf("Danielle ");
    if (sales_E == highest_sales) printf("Edward ");
    if (sales_F == highest_sales) printf("Francis ");
    printf("\n");
     

    return 0; 
}