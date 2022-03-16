#include "main.h"
/**
 * _abs - function that prints the absolute value pf a number
 * @n: takes in an integer
 * Return: 1 if > 0, 0if == 0, positive if negative
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

