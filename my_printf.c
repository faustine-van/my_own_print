#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 *_printf - implementation  my own simple printf
 *@format: format specifiers
 *Return: len;
*/
int _printf(const char *format, ...)
{
	va_list args;
	int len;

	va_start(args, format);
	len = my_vprintf(format, args);
	va_end(args);
	return (len);
}
