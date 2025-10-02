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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int swapper = arr[i];
                arr[i] = arr[j];
                arr[j] = swapper;
            }
            
        }
        
    }


    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    if (n%2==0)
    {
        int median = (arr[(n/2)-1] + arr[n/2])/2;
        printf("The median is: %d",median);
    }
    else
    {
        int median = arr[n/2];
        printf("The median is: %d",median);
    }
    return 0;

    
}
    