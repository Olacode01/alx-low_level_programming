#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
char *guard = dest;

while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (guard);
}
