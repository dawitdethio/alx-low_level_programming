#include "main.h"
/**
* swap_int - main function.
* @a: integer.
* @b: integer.
* Return: no return.
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
