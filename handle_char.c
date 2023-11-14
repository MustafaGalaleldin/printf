#include "main.h"
/**
 * hxh_char - a function that prints a character format
 * @ptr: a pointer to the format argument
 * @count: the number of printed arguments
 * Return: count
*/
int hxh_char(va_list *ptr, int *count)
{
	 _mchar(va_arg(*ptr, int));
	(*count)++;
	return (*count);
}
