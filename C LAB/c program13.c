#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, largest, smallest;
    int even = 0, odd = 0;
    float mean;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = smallest = a[0];

    for (i = 0; i < n; i++)
    {
        sum += a[i];

        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    mean = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}
