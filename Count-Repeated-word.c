#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char str[50], m1[30], m2[30], ch;
    int x = 0, y = 0, z = 0;
 
    printf("Enter The String To Find The Repetive Word: ");
    x = 0;
    do
    {
        fflush(stdin);
        ch = getchar();
        str[x++] = ch;
 
    } while (ch != '\n');
    str[x - 1] = '\0';
    printf("Enter Any Word From The Given String To Search: ");
    scanf("%s", m1);
    for (x = 0; x < strlen(str); x++)
    {
        while (x < strlen(str) && !isspace(str[x]) && isalnum(str[x]))
        {
            m2[y++] = str[x++];
        }
        if (y != 0)
        {
            m2[y] = '\0';
            if (strcmp(m2, m1) == 0)
            {
                z++;
            }
            y = 0;
        }
    }
 
    printf("The Word '%s' From The Given String '%s' is found %d'.\n Times", m1, str, z);
}