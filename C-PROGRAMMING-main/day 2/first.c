#include <stdio.h>

int main(void)
{
    int arr[100];
    int n, i, pos, value;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100)
    {
        printf("Invalid size. Please use 0 to 99.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n)
    {
        printf("Invalid position. Must be between 0 and %d.\n", n);
        return 1;
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}