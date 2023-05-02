#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	long res = INT_MAX;
	void *addr = (void *)0x7ffe637541f0;

	_printf("-------------character----------------------------\n");
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("print character:%c\n", 'H');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("%c", '\0');/* print nothing because it NULL*/
	_printf("-------------string---------------------------\n");
	_printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("print string:%s\n", "hello world");
	_printf(NULL);
	_printf("-------------%----------------------------\n");
	_printf("%%\n");
	 _printf("-----\n");
	_printf("%\n");
	_printf("%!\n");
	_printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("css%ccs%scscscs", 'T', "Test");
	_printf("-------------integers----------------------------\n");
	_printf("print an integers:%d\n", 10);
	_printf("print neg integers:%d\n", -10);
	_printf("print zero integers:%d\n", 0);
	_printf("-------------hex----------------------------\n");
	_printf("print hex integers:%x\n", 10);
	_printf("print xero hexintegers:%d\n", 0);
	_printf("print pointer:%p\n", addr);



	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	_printf("-------------binary----------------------------\n");
	_printf("%b\n", 98);
	_printf("%b", 1024);
	_printf("%b", -1024);
	_printf("%b", 0);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%b - %b = %b\n", 2048, 1024, 1024);
	_printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	/*printf("Unknown:[%r]\n");*/
	return (0);
}
