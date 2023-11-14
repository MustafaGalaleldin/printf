#include "main.h"
/**
 * handle_case - a function that examine the format and prints the arguments
 * @format: the format
 * @type: a list of types of arguments passed to the function
 * @count: number of printed
 * @i: index of the format string
 * @s: format string
 * Return: Nothing
*/
int handle_case(char format, va_list *type, int *count, int i, const char *s)
{
	size_t j;
	Format_specifier specifiers[] = {
	{'c', hxh_char},
	{'s', hxh_str},
	{'d', hxh_int},
	{'i', hxh_int},
	{'b', hxh_binary},
	{'o', hxh_octal},
	{'x', hxh_m_hexa},
	{'X', hxh_M_hexa},
	{'u', hxh_unsigned},
	{'S', hxh_Str},
	{'R', hxh_rot13},
	{'p', hxh_address},
	{'r', hxh_rev}
	};

	for (j = 0; j < sizeof(specifiers) / sizeof(specifiers[0]); j++)
	{
		if (specifiers[j].specifier == format)
		{
			specifiers[j].handler(type, count);
			return (*count); }
	}
	switch (format)
	{
	case ' ':
	case '\0':
		return (-1);
	case '%':
		_mchar('%');
		(*count)++;
		break;
	default:
		*count += _mchar(s[i - 1]);
		*count += _mchar(s[i]);
		break;
	}

	return (*count);
}
