#include <stdio.h>

struct Student
{
    int reg, m1, m2, m3;
    char name[30];
};

int main()
{
    struct Student s;
    FILE *fp;
    int ch, key, found;

    do
    {
        printf("\n1.Add 2.Display 3.Search 4.Exit\n");
        printf("Enter choice : ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("Enter reg no, name and marks: ");
            scanf("%d %29s %d %d %d",
                  &s.reg, s.name, &s.m1, &s.m2, &s.m3);

            fp = fopen("students.txt", "a");

            if (fp == NULL)
            {
                printf("File error\n");
                continue;
            }

            fprintf(fp, "%d %s %d %d %d\n",
                    s.reg, s.name, s.m1, s.m2, s.m3);

            fclose(fp);
            printf("Record added\n");
        }
        else if (ch == 2 || ch == 3)
        {
            found = 0;

            if (ch == 3)
            {
                printf("Enter register number: ");
                scanf("%d", &key);
            }

            fp = fopen("students.txt", "r");

            if (fp == NULL)
            {
                printf("No records found\n");
                continue;
            }

            while (fscanf(fp, "%d %29s %d %d %d",
                          &s.reg, s.name, &s.m1, &s.m2, &s.m3) == 5)
            {
                if (ch == 2 || s.reg == key)
                {
                    float total = s.m1 + s.m2 + s.m3;

                    printf("\n%d %s Total=%.0f Percentage=%.2f\n",
                           s.reg, s.name, total, total / 3.0);

                    if (s.m1 < 35 || s.m2 < 35 || s.m3 < 35)
                        printf("Result: Fail\n");
                    else
                        printf("Result: Pass\n");

                    found = 1;
                }
            }

            fclose(fp);

            if (!found)
                printf("Record not found\n");
        }
        else if (ch != 4)
        {
            printf("Invalid choice\n");
        }

    } while (ch != 4);

    return 0;
}
