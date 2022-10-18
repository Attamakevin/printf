#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _printf - a function that produces output according to format
 * @format : this is the format string containing the characters and specifiers
 * Return : return length of the formatted output string
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flag_t*);
	const char *p;
	va_list args;
	flag_t flags = {0,0,0};
	register int count = 0; 

	va_start(args, format);

	if(!format || (format[0] == '%' && !format[1]))
		return (-1);
	if(format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	
	for (p = format; *p; p++)
	{
		if(*p == '%')
		{
			p++;
			
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
			{
				p++;
				pfunc = get_print(*p);
				count += (pfunc)
				? pfunc(args, &flags)
				: _printf("% % %c", *p);
			}
			else 
				count += _putchar(*p);
		}
		_putchar(-1);
		va_end(args);
		return(count);
	}