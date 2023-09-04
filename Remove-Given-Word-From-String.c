#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main ()
{
	char str[50], str1[50], td[20][30];
	int i = 0, j = 0, k = 0, x = 0, y = 0;
 
	printf ("Enter The Main String:\n");
	gets (str);
 
	printf ("Enter A Word To Be Removed From The Main String:\n");
	gets (str1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			td[k][j] = '\0';
			k ++;
			j = 0;
		}
		else
		{
			td[k][j] = str[i];
			j ++;
		}
	}
 
	td[k][j] = '\0';
 
	j = 0;
	for (i = 0; i < k + 1; i++)
	{
		if (strcmp(td[i], str1) == 0)
		{
			td[i][j] = '\0';
		}
	}
 
	j = 0;
 
	for (i = 0; i < k + 1; i++)
	{
		if (td[i][j] == '\0')
			continue;
		else
			printf ("%s ", td[i]);
	}
 
	printf ("\n");
 
	return 0;
}