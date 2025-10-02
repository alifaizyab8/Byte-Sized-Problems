#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    // Custom sorting algorithm: compare each element with the rest and swap if needed
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Swap arr[i] and arr[j]
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
                
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}