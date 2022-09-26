//2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
int main()
{
    char str[] = "Bittu kumar";
    char ch;
    int countOcc = 0;
    printf("Enter Character: - ");
    scanf("%c", &ch);
    for (int i = 0; str[i]; i++)
        if (str[i] == ch)
            countOcc++;
    printf("\nOccurence of '%c' Character in \"%s\" string is: %d", ch, str, countOcc);
    return 0;
}
