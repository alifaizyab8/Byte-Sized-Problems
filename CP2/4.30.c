#include <stdio.h>
#include <conio.h>

int main(void) {
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    int grade;

    puts("Enter the letter grades (A, B, C, D, F).");
    puts("Press '9' to end input.");

    while (1) {  // infinite loop, break manually
        grade = getch();

        if (grade == '9')  // exit condition first
            break;

        printf("%c\n", grade);  // echo input

        if (grade == 'A' || grade == 'a')
            ++aCount;
        else if (grade == 'B' || grade == 'b')
            ++bCount;
        else if (grade == 'C' || grade == 'c')
            ++cCount;
        else if (grade == 'D' || grade == 'd')
            ++dCount;
        else if (grade == 'F' || grade == 'f')
            ++fCount;
        else if (grade == '\n' || grade == '\t' || grade == ' ')
            continue;  // ignore whitespace
        else
            printf("Incorrect letter grade entered. Enter a new grade.\n");
    }

    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    return 0;
}
