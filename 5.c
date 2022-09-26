//5. Write a program to convert a given string into lowercase

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

    printf("Convert string in lowercase: %s", str);
    return 0;
}
