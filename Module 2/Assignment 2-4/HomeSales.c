#include <stdio.h>
#include <ctype.h>

int main() {

    double sales_D = 0, sales_E = 0, sales_F = 0, sales_amount;
    char salesperson;
    
    while(1) {
        printf("SalesPerson (Initials: D, E, F, Z to End): ");
        scanf(" %c", &salesperson);
        salesperson = toupper(salesperson);

        if (salesperson == 'Z') {
            /*printf("\r            \r");*/
            break;
        }

        if (salesperson != 'D' && salesperson != 'E' && salesperson != 'F' ) {
            printf("    Intermediate Output: Error, Invalid Salesperson Selected, Please Try Again\n");
            continue;
        }

        printf("sale: ");
        if (scanf("%lf", &sales_amount) != 1 || sales_amount < 0){
            printf("    Intermediate Output: Error, Invalid Sale's Amount, Please Try Again\n");
            while(getchar() != '\n');
            continue;
        }

        switch (salesperson) {
            case 'D': sales_D += sales_amount; 
            break;
            case 'E': sales_E += sales_amount; 
            break;
            case 'F': sales_F += sales_amount;
            break;
        }       

    }
    printf("\nEach Person's Sales Total:\n");
    printf("D: $%d\n", sales_D);
    printf("E: $%d\n", sales_E);
    printf("F: $%d\n", sales_F);

    int grand_total = sales_D + sales_E + sales_F;
    printf("Grand Total: $%d\n", grand_total);

    char highest_sales = (sales_D >= sales_E && sales_D >= sales_F) ? 'D' :
                               (sales_E >= sales_D && sales_E >= sales_F) ? 'E' : 'F';
    printf("Highest Sale: %c\n", highest_sales);
     
    return 0;
}