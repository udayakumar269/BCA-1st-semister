#include <stdio.h>

int main()
{
    int a[100], b[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    printf("\nAscending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    for (i = 0; i < n / 2; i++)
    {
        temp = b[i];
        b[i] = b[n - 1 - i];
        b[n - 1 - i] = temp;
    }

    printf("\nDescending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    printf("\n");

    return 0;
}
