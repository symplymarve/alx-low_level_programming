#include "main.h"
#include <stdio.h>

/**
* puts2 - function that prints every other character of a string, starting with a first character followed by a new line
* @str: pointer to the string to print
* Return: void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
putchar(str[i]);
}
i++;
}
putchar('\n');
}
