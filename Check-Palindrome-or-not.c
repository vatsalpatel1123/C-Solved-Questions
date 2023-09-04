#include <stdio.h>
#include <string.h>
 
void main()
{
    char string[50], reverse[40] = {'\0'};
    int  x, length = 0, y = 0;
 
    fflush(stdin);
    printf("Enter The String To Find Whether The Given String Is Palindrome: \n");
    gets(string);
    for (x = 0; string[x] != '\0'; x++)
    {
        length++;
    }
    for (x = length - 1; x >= 0; x--)
    {
       reverse[length - x - 1] = string[x];
    }
    for (x = 0; x < length; x++)
    {
        if (reverse[x] == string[x])
            y = 1;
        else
            y = 0;
    }
    if (y == 1)
        printf("The Given String %s is a palindrome \n", string);
    else
        printf("The Given String %s is not a palindrome \n", string);
}