#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _strlen(const char *String);
int print_string(char *string);
int _printChar(char c);
int my_vprintf(const char *format, va_list ap);
int _printf(const char *format, ...);
void print_buffer(char *converted);
void decimal_to_string(char *converted, unsigned int n, int base);
void numberToStringInt(char *converted, int n, int base);
#endif
