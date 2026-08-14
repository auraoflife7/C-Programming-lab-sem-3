#include <stdio.h>

int main(void)
{
    int arr[100];
    int n, i, pos;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size. Please use 1 to 100.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n)
    {
        printf("Invalid position. Must be between 0 and %d.\n", n - 1);
        return 1;
    }

    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}