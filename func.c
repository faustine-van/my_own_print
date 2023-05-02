#include <stdio.h>
#include "main.h"
#define MAXSTRING 509
/**
 *_strlen - length of string
 *@string: string variable pointer
 *Return: len;
*/
int _strlen(const char *string)
{
	unsigned int a = 0, len = 0;

	while (a[string] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 *print_string - Print string
 *@string: string variable pointer
 *Return: len;
*/
int print_string(char *string)
{
	int a, len = 0;

	if (string == NULL)/*same as (char *)0 is NULL pointer);*/
	{
		string = "(null)";
	}
	for (a = 0; a < MAXSTRING; a++)
	{
		len++;
		if (string[a] == '\0')
		{
			break;
		}
		else
		{

			_printChar(string[a]);
		}
	}
	return (len);
}
