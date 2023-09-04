#include <stdio.h>
#include <string.h>
 
void main()
{
    char string[50] = {'\0'};
    int  x, length = 0, y = 0;
 
    fflush(stdin);
    printf("Enter The String : \n");
    gets(string);
    for (x = 0; string[x] != '\0'; x++)
    {
        length++;
    }

    printf("Length of String : %d\n",length-1);
    printf("Total Chararter of String : %d\n",length);

    
    return 0;
}