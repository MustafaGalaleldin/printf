#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int _mchar(char c);
int _printf(const char *format, ...);
int handle_case(char format, va_list *type, int *count, int i, const char *s);
int hxh_char(va_list *type, int *count);
int hxh_str(va_list *type, int *count);
int hxh_binary(va_list *type, int *count);
int hxh_int(va_list *type, int *count);
int hxh_octal(va_list *type, int *count);
int hxh_m_hexa(va_list *type, int *count);
int hxh_M_hexa(va_list *type, int *count);
int hxh_unsigned(va_list *type, int *count);
int hxh_print_unsign(unsigned int n, int *count);
int hxh_Str(va_list *ptr, int *count);
void examine_hxh_m_hexa(int d, char *ptr);
void examine_hxh_M_hexa(int d, char *ptr);
int hxh_rot13(va_list *type, int *count);
/**
 * struct functions - functions structure
 * @specifier: char specifier
 * @handler: pointer to function
 */
typedef struct functions
{
	char specifier;
	int (*handler)(va_list *, int *);
} Format_specifier;
extern Format_specifier specifiers[];
#endif
