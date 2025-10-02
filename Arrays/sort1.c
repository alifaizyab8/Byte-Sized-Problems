#include<stdio.h>
int main()
{
    /*
    How to sort an array in C?
    loop and take first number and compare it with all other numbers
    if any number is found smaller,assign that position to the first number(chosen)
    and continue the loop

    
    */


    int arr[10] = {34, 12, 5, 67, 1, 89, 23, 45, 78, 90};
    int n = 10;
    // Custom sorting algorithm: compare each element with the rest and swap if needed
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}