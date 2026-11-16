#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n1.Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Reminder");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("sum = %d\n",a+b);
        break;
    case 2:
        printf("Difference %d\n",a+b);
        break;
    case 3:
        printf("Product %d\n",a+b);
        break;
    case 4:
        if(b!=0)
           printf("Quotiant %d\n",a/b);
           else
            printf("Division by zero is not possible.\n");
        break;
    case 5:
        if(b!=0)
            printf("Reminder %d\n",a%b);
        else
            printf("Reminder by zero is not possible.\n");
        break;
        Default:
            printf("invalid choice.\n");
    }
    return 0;
}

