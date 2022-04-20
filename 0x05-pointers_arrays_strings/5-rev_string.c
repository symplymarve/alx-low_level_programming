#include "main.h"
#include <stdio.h>

/**
* rev_string - function that reverse a string; followed by a new line
* @s : pointer to the string to print
* Return: void
*/

void rev_string(char *s)
{
int len, i, half;
char temp;
for (len = 0; s[len] != '\0'; len++)
;
i = 0;
half = len / 2;
while (half--)
{
temp = s[len - i - 1];
s[len -i -1] = s[i];
s[i] = temp;
i++;
}
}
