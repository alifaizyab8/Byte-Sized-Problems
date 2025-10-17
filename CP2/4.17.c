#include <stdio.h>

int main(void)
{
    // Sample data for three customers
    int acc[3] = {101, 202, 303};
    float oldlmt[3] = {2000.0, 5000.0, 1500.0};
    float balances[3] = {1200.0, 2000.0, 800.0};

    for (int i = 0; i < 3; i++)
    {
        float new_limit = oldlmt[i] / 2.0;

        printf("Account: %d\n", acc[i]);
        printf("Old limit: $%.2f\n", oldlmt[i]);
        printf("New limit: $%.2f\n", new_limit);
        printf("Current balance: $%.2f\n", balances[i]);

        if (balances[i] > new_limit)
            printf("** Balance exceeds new credit limit! **\n");

        printf("\n");
    }

    return 0;
}
