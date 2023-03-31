#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int i, chars_printed, total_printed_chars;
	int flags, width, precision, size, buff_ind;
	va_list list;
	char buffer[BUFF_SIZE];

	chars_printed = 0, total_printed_chars = 0, buff_ind = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
			}
			total_printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			chars_printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (chars_printed == -1)
			{
				return (-1);
			}
			total_printed_chars += chars_printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);
	return (total_printed_chars);

}
