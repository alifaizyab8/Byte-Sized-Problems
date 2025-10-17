#include <stdio.h>

int main(void) {
    int code;
    float pay = 0;

    printf("Enter employee paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, 5=Exit): ");
    scanf("%d", &code);

    while (code != 5) {
        switch (code) {
            case 1: { // Manager
                float salary;
                printf("Enter fixed weekly salary: ");
                scanf("%f", &salary);
                pay = salary;
                break;
            }
            case 2: { // Hourly worker
                float hours, rate;
                printf("Enter hourly rate: ");
                scanf("%f", &rate);
                printf("Enter total hours worked: ");
                scanf("%f", &hours);

                if (hours <= 40)
                    pay = rate * hours;
                else
                    pay = 40 * rate + (hours - 40) * rate * 1.5;
                break;
            }
            case 3: { // Commission worker
                float sales;
                printf("Enter gross weekly sales: ");
                scanf("%f", &sales);
                pay = 250 + 0.057 * sales;
                break;
            }
            case 4: { // Pieceworker
                int pieces;
                float ratePerPiece;
                printf("Enter number of pieces produced: ");
                scanf("%d", &pieces);
                printf("Enter pay per piece: ");
                scanf("%f", &ratePerPiece);
                pay = pieces * ratePerPiece;
                break;
            }
            default:
                printf("Invalid paycode.\n");
                pay = 0;
        }

        printf("Weekly pay: $%.2f\n\n", pay);
        printf("Enter next paycode (1-4, 5 to exit): ");
        scanf("%d", &code);
    }

    printf("Program ended.\n");
    return 0;
}
