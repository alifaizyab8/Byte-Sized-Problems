#include <stdio.h>

int main(void) {
    int product_number, quantity;
    float total = 0.0;

    printf("Enter product number (1-5) and quantity.\n");
    printf("Enter 0 to calculate total\n");

    while (1) {
        printf("Product number: ");
        scanf("%d", &product_number);

        if (product_number == 0)
            break;  

        printf("Quantity sold: ");
        scanf("%d", &quantity);

        float price = 0.0;

        switch (product_number) {
            case 1: price = 2.98; break;
            case 2: price = 4.50; break;
            case 3: price = 9.98; break;
            case 4: price = 4.49; break;
            case 5: price = 6.87; break;
            default:
                printf("Invalid product number!\n");
                continue;
        }

            total += price * quantity;
    }

    printf("\nTotal retail value for the week: $%.2f\n", total);
    return 0;
}
