#include <stdio.h>
#include <limits.h>

int ArrayPrint(int arr[], int n)
{
    printf("The array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int sorting(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (arr[j - 1] >= arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int secondMaxi(int *arr, int n)
{
    int maxi = arr[n - 1];
    for (int i = n - 2; i > 0; i++)
    {
        if (maxi > arr[i])
            return arr[i];
    }
    return maxi;
}

int main()
{
    int n;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ArrayPrint(arr, n);

    sorting(arr, n);
    printf("Sorted:\n");
    ArrayPrint(arr, n);

    printf("The maximum element is : %d\n", arr[n - 1]);
    printf("The minimum element is : %d\n", arr[0]);

    int secMax = secondMaxi(arr, n);
    printf("The second largest element : %d\n", secMax);

    printf("The Array sum is : %d", arraySum(arr, n));
}