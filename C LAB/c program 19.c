#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i, sum = 0;
    int largest, smallest;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 10000)
    {
        printf("Invalid number of elements.\n");
        return 0;
    }

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);

        largest = smallest = *(ptr);

        if (i == 0)
            largest = smallest = *(ptr);
    }

    for (i = 0; i < n; i++)
    {
        sum += *(ptr + i);

        if (*(ptr + i) > largest)
            largest = *(ptr + i);

        if (*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    free(ptr);

    printf("Memory released successfully.\n");

    return 0;
}
