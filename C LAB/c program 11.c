#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;
    int a = 0, b = 1, c;
    printf("Enter a non negative integer for factorial: ");
    scanf("%d", &n);
    if(n < 0 || n > 10)
    {
        printf("Entaer a number between 0 an 20.\n");
    }
    else
    {
        for(i = 1; i <= n; i++)
            fact = fact * i;
        printf("Factorial = %11u\n", fact);
    }
    printf("Enter number of fibonacci terms: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter a positive number of terms.\n");
    }
    else
{


        printf("Fibonaci Series: ");
        for (i = 1; i<= n; i++)
        {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
        }
        return 0;
        }




