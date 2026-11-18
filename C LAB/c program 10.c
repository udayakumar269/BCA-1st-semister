#include <stdio.h>
int main()
{
    int n, start, end, i, j, prime;
    printf("Enter an integer to check: ");
    scanf("%d", &n);
    prime = 1;
    if(n < 2)
        prime = 0;
    for(i = 2; i <= n / i && prime == 1; i++)
    {
        if(n % i == 0)
            prime = 0;
    }
    if(prime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n");
    printf("Enter the starting and ending limits: ");
    scanf ("%d %d", &start, &end);
    if (start > end)
    {
       printf("Invalid limits.\n");
        return 0;
    }
    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++)
    {
        if (i < 2)
            continue;
        prime = 1;
        for(j = 2; j <= i / j; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
            printf("%d ", i);

    }
    printf("\n");
    return 0;
}





