//9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; str[j]; j++)
        {
            if (str[i] < str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted String: %s",str);

    return 0;
}
