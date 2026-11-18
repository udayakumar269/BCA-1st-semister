#include <stdio.h>
int main()
{
    int n, temp, digit, count = 0;
    int sum = 0, power, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("please enter positive integer: ");
        return 0;
    }
    temp = n;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while(temp > 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= count; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;

    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstromg number.\n", n);
    return 0;

}
