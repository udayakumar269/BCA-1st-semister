#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], r[10][10];
    int i, j, k, r1, c1, r2, c2, choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Transpose\n");
    printf("4. Multiplication\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice != 3)
    {
        printf("Enter rows and columns of matrix A: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns of matrix B: ");
        scanf("%d %d", &r2, &c2);

        if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
            r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
        {
            printf("Invalid matrix dimensions.\n");
            return 0;
        }

        if ((choice == 1 || choice == 2) && (r1 != r2 || c1 != c2))
        {
            printf("Addition/subtraction not possible.\n");
            return 0;
        }

        if (choice == 4 && c1 != r2)
        {
            printf("Multiplication not possible.\n");
            return 0;
        }

        printf("Enter matrix A elements:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);

        printf("Enter matrix B elements:\n");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);

        if (choice == 1)
        {
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    r[i][j] = a[i][j] + b[i][j];
        }
        else if (choice == 2)
        {
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    r[i][j] = a[i][j] - b[i][j];
        }
        else
        {
            for (i = 0; i < r1; i++)
                for (j = 0; j < c2; j++)
                {
                    r[i][j] = 0;
                    for (k = 0; k < c1; k++)
                        r[i][j] += a[i][k] * b[k][j];
                }

            c1 = c2;
        }

        printf("Result matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("%d ", r[i][j]);
            printf("\n");
        }
    }
    else if (choice == 3)
    {
        printf("Enter rows and columns: ");
        scanf("%d %d", &r1, &c1);

        if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10)
        {
            printf("Invalid matrix dimensions.\n");
            return 0;
        }

        printf("Enter matrix elements:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);

        printf("Transpose matrix:\n");
        for (j = 0; j < c1; j++)
        {
            for (i = 0; i < r1; i++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}
