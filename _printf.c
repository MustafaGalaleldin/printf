#include "main.h"
/**
 * _printf - write output to stdout
 * @format: a character string
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list ar;
	int i = 0, count = 0;

	if (!format)
		return (-1);
	va_start(ar, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_mchar(format[i]);
			count++;
			i++;
			continue;
		}
		i++;
		if (!format[i])
			return (-1);
		handle_case(format[i], &ar, &count, i, format);
		i++;
	}
	va_end(ar);
	return (count);
}
