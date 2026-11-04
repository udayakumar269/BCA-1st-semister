#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("product = %d\n", a * b);
    if (b != 0)
    {
        printf("Quotient = %d\n", a/b);
        printf("Remainder = %d\n", a%b);
    }
      else
      {
          printf("Division and remainder are not possible. \n");
      }

      return 0;
}


