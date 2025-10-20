#include <stdio.h>
float calculateCharges(int h);
int main()
{
    int h1, h2, h3, totalHours = 0;
    float c1, c2, c3, totalCharge = 0.0;
    printf("Enter Hours for Car 1, 2 and 3 respectively\n");
    scanf("%d %d %d", &h1, &h2, &h3);
    c1 = calculateCharges(h1);
    c2 = calculateCharges(h2);
    c3 = calculateCharges(h3);
    printf("Car\tHours\tCharge\n");
    printf("1\t%d\t%.2f\n", h1, c1);
    printf("2\t%d\t%.2f\n", h2, c2);
    printf("3\t%d\t%.2f\n", h3, c3);
    printf("Total\t%d\t%.2f", h1 + h2 + h3, c1 + c2 + c3);
}
float calculateCharges(int h)
{
    float charge = 0.0;
    float tax;
    if (h <= 72)
    {
        if (h == 72)
        {
            tax = 0.5 * h;
            charge = 150.0 + tax;
        }
        else if (h >= 48)
        {
            tax = 0.5 * h;
            charge = 100.0 + tax + (h - 48) * 5.0;
        }
        else if (h >= 24)
        {
            tax = 0.5 * h;
            charge = 50.0 + tax + (h - 24) * 5.0;
        }
        else if (h >= 8)
        {
            tax = 0.5 * h;
            charge = 25.0 + tax + (h - 8) * 5.0;
        }
        else
        {
            printf("Cannot be rented less than 8 hours\n");
        }
    }
    else
    {
        printf("Cannot be rented more than 72 Hours\n");
    }
    return charge;
}