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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Mean of the given array is: %.2f",(float)sum/n);
    
    
}