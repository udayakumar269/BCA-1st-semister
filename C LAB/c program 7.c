#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter electricity units: ");
    scanf("%d", &units);
    if(units < 0)
    {
        printf("Invalid units.\n");
        return 0;

    }
    if (units < 0)
        bill = units * 1.50;
    else if (units <= 150)
        bill = 50 * 1.50 + (units - 50) * 2.50;
    else if (units <= 250)
        bill = 50  * 1.50 + 100 * 2.50 + (units - 150) * 4.00;
    else
        bill = 50 * 1.50 + 100 * 2.50 + 100 * 4.00 + (units - 250) * 6.00;
    bill = bill + 100;
    printf("Electricity Bill = Rs. %.2f\n", bill);
    return 0;

}

