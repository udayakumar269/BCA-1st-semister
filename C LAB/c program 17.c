#include <stdio.h>

int main()
{
    char s1[100], s2[100], copy[100];
    char concat[200], reverse[100];
    int i, j, len1 = 0, len2 = 0, flag = 0;

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    while (s1[len1] != '\0')
        len1++;

    while (s2[len2] != '\0')
        len2++;

    printf("Length of first string = %d\n", len1);
    printf("Length of second string = %d\n", len2);

    for (i = 0; i <= len1; i++)
        copy[i] = s1[i];

    printf("Copied string = %s\n", copy);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j <= len2; j++)
        concat[i + j] = s2[j];

    printf("Concatenated string = %s\n", concat);

    i = 0;
    while (s1[i] == s2[i] &&
           s1[i] != '\0' &&
           s2[i] != '\0')
        i++;

    if (s1[i] == s2[i])
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    for (i = 0; i < len1; i++)
        reverse[i] = s1[len1 - 1 - i];

    reverse[len1] = '\0';

    printf("Reversed first string = %s\n", reverse);

    for (i = 0; i < len1 / 2; i++)
    {
        if (s1[i] != s1[len1 - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("First string is a palindrome.\n");
    else
        printf("First string is not a palindrome.\n");

    return 0;
}
