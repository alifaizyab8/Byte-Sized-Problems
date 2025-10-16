#include <stdio.h>

int main(void)
{
    // Each customer: {account_number, old_credit_limit, current_balance}
    int accounts[3] = {101, 202, 303};
    float old_limits[3] = {2000.0, 5000.0, 1500.0};
    float balances[3] = {1200.0, 2000.0, 800.0};

    printf("Customer Credit Status Report:\n\n");

    for (int i = 0; i < 3; i++)
    {
        float new_limit = old_limits[i] / 2.0f;

        printf("Account: %d\n", accounts[i]);
        printf("Old limit: $%.2f\n", old_limits[i]);
        printf("New limit: $%.2f\n", new_limit);
        printf("Current balance: $%.2f\n", balances[i]);

        if (balances[i] > new_limit)
            printf("** Balance exceeds new credit limit! **\n");

        printf("\n");
    }

    return 0;
}
