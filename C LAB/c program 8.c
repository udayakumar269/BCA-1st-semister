#include <stdio.h>
int main()
{
    int n, temp, digit;
    int count = 0, sum = 0, reverse = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Please enter a positive integer: ");
        return 0;

    }
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        count++;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    printf("Number of digits = %d\n", count);
    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", reverse);
    if (n == reverse)
        printf("Palindrome number.\n");
    else
        printf("Not a palindrome number.\n");
    return 0;

}
