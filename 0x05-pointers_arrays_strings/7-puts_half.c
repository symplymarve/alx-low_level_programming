#include "main.h"
#include <stdio.h>

/**
* puts_half - function that prints half of a string
* @str: char array string type
* Description: if odd number of chars, print (length -1) / 2
*/

void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
