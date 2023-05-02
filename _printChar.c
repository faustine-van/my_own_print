#include <unistd.h>


int _printChar(char c)
{
	char a;

	a = write(1, &c, 1);
	return (a);
}
