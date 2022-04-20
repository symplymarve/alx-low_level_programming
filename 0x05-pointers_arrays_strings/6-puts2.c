#include "main.h"
#include <stdio.h>

/**
* puts2 - function that prints every other character of a string, starting with a first character followed by a new line
* @str: pointer to the string to print
* Return: void
*/

void puts2(char *str)
{
int count = 0;
while (count >= 0 )
{
if (str[count] == '\0')
{
putchar('\n');
break;
}
if (count % 2 == 0)
putchar(str[count]);
count++;
}
}
