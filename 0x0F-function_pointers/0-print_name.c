#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char string
 * @f: function pointer that takes a string argument
 * Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
return;
f(name);
}
