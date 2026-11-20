#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

unsigned long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

long long power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main()
{
    int choice, a, b, n, x;

    do
    {
        printf("\n1. GCD\n");
        printf("2. LCM\n");
        printf("3. Factorial\n");
        printf("4. Power (x^n)\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two non-negative integers: ");
                scanf("%d %d", &a, &b);

                if (a < 0 || b < 0)
                    printf("Invalid input.\n");
                else
                    printf("GCD = %d\n", gcd(a, b));
                break;

            case 2:
                printf("Enter two positive integers: ");
                scanf("%d %d", &a, &b);

                if (a <= 0 || b <= 0)
                    printf("Invalid input.\n");
                else
                    printf("LCM = %d\n", lcm(a, b));
                break;

            case 3:
                printf("Enter an integer (0 to 20): ");
                scanf("%d", &n);

                if (n < 0 || n > 20)
                    printf("Invalid input.\n");
                else
                    printf("Factorial = %llu\n", factorial(n));
                break;

            case 4:
                printf("Enter base and non-negative exponent: ");
                scanf("%d %d", &x, &n);

                if (n < 0)
                    printf("Invalid exponent.\n");
                else
                    printf("Result = %lld\n", power(x, n));
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
