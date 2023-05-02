#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>
/**
 *decimal_to_string - convert decimal to any base
 *@n: int to be converted into string
 *@base: any base to convert into string
 *@converted: character array that will hold the resulting string.
 *Return: 0;
*/
void decimal_to_string(char *converted, unsigned int n, int base)
{
	int i, j, count, MAX_REP_LEN = 250;
	char NUM_BASE[] = "0123456789abcdef";
	char buffer[250];

	if (n == 0)
	{
		converted[0] = '0';
		converted[1] = '\0';
		return;
	}
	i = MAX_REP_LEN - 1;/*start filling the buffer from the end of the */
	/*array and move towards the beginning.*/


	while (n != 0)
	{
		/*take remainder store into buffer*/
		buffer[i--] = NUM_BASE[n % base];
		n /= base;
	}
	count = 0;/*keeps track the nbr of characters that have been copied */

	for (j = i + 1; j <= MAX_REP_LEN - 1; j++)
	{
		converted[count++] = buffer[j];
		/*copy each digit to the converted array in order.*/
	}
	converted[count] = '\0';
}
void numberToStringInt(char *converted, int n, int base)
{
	if (n < 0)
	{
		*converted++ = '-';
		n = -n;

	}
		decimal_to_string(converted, n, base);
}
