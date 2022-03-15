#include "holberton.h"
/**
 *print_alphabet_10 - repeats the print_alphabet 10 times.
 *return: nothing.
*/
void print_alphabet_10(void)
{
int i;
char c;

for (i = 0; i < 10; ++i)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
