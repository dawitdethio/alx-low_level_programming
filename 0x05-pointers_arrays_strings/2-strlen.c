#include "main.h"
/**
* _strlen - main function that returns the length of a string.
* @s : string
* Return: length of the string s.
*/
int _strlen(char *s)
{
int x;

x = 0;
while (*s != '\0')
{
s++;
x++;
}
return (x);
}
