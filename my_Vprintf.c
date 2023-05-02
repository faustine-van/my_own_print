#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 *my_vprintf - Print formatted data from variable argument list to stdout
 *@format: format string that replace format specifiers;
 *@ap: argument ap will help to output starndard output
 *Return: len;
*/
int my_vprintf(const char *format, va_list ap)
{
	int state = 0;/* state is 0 means normal and 1 means escape*/
	int len = 0, d;
	unsigned int i, o, x, u, b;
	char *s;
	char buffer[250];

	/*check if format is NULL*/
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;

			}
			else
			{
				/*print character in case no format specifiers*/
				_printChar(*format);
				len++;
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					_printChar(va_arg(ap, int));
					break;
				case 's':
					s = va_arg(ap, char *);
					 print_string(s);
					break;
				case '%':
					_printChar('%');
					len++;
					break;
				case 'd':
					d = va_arg(ap, int);
					numberToStringInt(buffer, d, 10);
					print_buffer(buffer);
					break;
				case 'i':
					i = va_arg(ap, int);
					decimal_to_string(buffer, i, 10);
					print_buffer(buffer);
					break;
				case 'o':
					o = i = va_arg(ap, unsigned int);
					decimal_to_string(buffer, o, 8);
					print_buffer(buffer);
					break;
				case 'U':
				case 'u':
					u = va_arg(ap, unsigned int);
					decimal_to_string(buffer, u, 10);
					print_buffer(buffer);
					break;
				case 'X':
				case 'x':
					x = va_arg(ap, unsigned int);
					decimal_to_string(buffer, x, 16);
					print_buffer(buffer);
					break;
				case 'p':
					_printChar('0');
					_printChar('x');
					break;
				case 'b':
					b = va_arg(ap, unsigned int);
					decimal_to_string(buffer, b, 2);
					print_buffer(buffer);
					break;
				default: /*non-formating character after %*/
					_printChar('%');
					len++;
					_printChar(*format);
					len++;
					break;
			}
	/*check if a given format string consists of only the % character*/
			if (*(format + 1) == '\0')
			{
				_printChar('%');
				len++;
				return (len);
			}
			state = 0;
		}
		format++;

	}
	return (len);
}
