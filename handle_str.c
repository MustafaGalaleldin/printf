#include "main.h"
/**
 * hxh_str - a function that prints a character format
 * @ptr: a pointer to the format argument
 * @count: the number of printed arguments
 * Return: Nothing
*/
int hxh_str(va_list *ptr, int *count)
{
	char *x = va_arg(*ptr, char *);
	int j;

	if (!x)
	{
		x = "(null)";
	}
	for (j = 0; x[j]; j++)
	{
		_mchar(x[j]);
		(*count)++;
	}
	return (*count);
}
