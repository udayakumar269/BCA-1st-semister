#include <stdio.h>
int main1()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;
    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0f;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    if(m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35 )
    {
        printf("Result Fail\n");

    }
    else if(percentage >= 75)
    {
        printf("Result: Distinction\n");
    }
    else if(percentage >= 60)
    {
        printf("Result: Firstclass\n");
    }
    else if(percentage >= 50)
    {
        printf("Result: Secondclass\n");
    }
    else
    {
        printf("Result: Passclass\n");
    }
    return 0;



}
