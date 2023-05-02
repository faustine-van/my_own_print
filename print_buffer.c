#include <stdio.h>
#include "main.h"
/**
 *print_buffer - print buffer od string
 *@converted: buffer to hold string
 *Return: 0;
*/
void print_buffer(char *converted)
{
	int a;

	for (a = 0; converted[a] != '\0'; a++)
	{
		_printChar(converted[a]);
	}
}
