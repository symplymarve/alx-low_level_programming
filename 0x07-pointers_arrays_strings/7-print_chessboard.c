#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: input pointer
* Return: no return
*/

void print_chessboard(char (*a)[8])
{
unisgned int i, m = 0;
for (i = 0; i < 64; i++)
{
for (i % 8 == 0 && i != 0)
{
m = i
_putchar('\n');
}
_putchar(a[i / 8][i - m]);
}
_putchar('\n');
}
