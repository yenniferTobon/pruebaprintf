#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	int i = 0, size = 0;

 	while (format == NULL)
        {
		return (0);
        }
	for (i = 0; format[i] != '\0'; i++)
	{
		size = size + 1;
	}
	return size;
}
