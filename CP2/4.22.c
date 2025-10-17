#include <stdio.h>
#include <conio.h>

int main(void)
{
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    int grade;           // one grade
    int totalPoints = 0; // total grade points
    int totalGrades = 0; // total number of grades entered

    puts("Enter the letter grades (A, B, C, D, F).");
    puts("Press 'x' to exit.\n");

    while ((grade = getch()) != 'x')
    {
        printf("%c\n", grade); // echo input
        switch (grade)
        {
        case 'A':
        case 'a':
            ++aCount;
            totalPoints += 5;
            ++totalGrades;
            break;

        case 'B':
        case 'b':
            ++bCount;
            totalPoints += 4;
            ++totalGrades;
            break;

        case 'C':
        case 'c':
            ++cCount;
            totalPoints += 3;
            ++totalGrades;
            break;

        case 'D':
        case 'd':
            ++dCount;
            totalPoints += 2;
            ++totalGrades;
            break;

        case 'F':
        case 'f':
            ++fCount;
            totalPoints += 1;
            ++totalGrades;
            break;

        case '\n':
        case '\t':
        case ' ':
            // ignore whitespace
            break;

        default:
            printf("\nIncorrect letter grade entered. Enter a new grade.\n");
            break;
        }
    }

    printf("\n\nTotals for each letter grade are:\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    if (totalGrades > 0)
    {
        float average = (float)totalPoints / totalGrades;
        char letter;

        if (average >= 4.5)
            letter = 'A';
        else if (average >= 3.5)
            letter = 'B';
        else if (average >= 2.5)
            letter = 'C';
        else if (average >= 1.5)
            letter = 'D';
        else
            letter = 'F';

        printf("\nClass average (grade points): %.2f (%c)\n", average, letter);
    }
    else
    {
        printf("\nNo valid grades were entered.\n");
    }

    return 0;
}
