#include "main.h"

/**
 * print_hex - function that prints a number in hexadecimal base in a lower 
 * case
 * @l : va_list argument from _printf
 * @f : is  pointer to the struct flags
 * Return : return the number of character printed
 */
 
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f -> hash == 1 && str[0] != '0')
		count += _puts("0x");
                count += _puts(str);
		return (count);
}

/**
 * print_hex_big - function to print numbers in hexadecimal base in upper case 
 * letters
 * @l : va_list argument from _printf
 * @f : is  pointer to the struct flags
 * Return : return the number of character printed
 */
 
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
        char *str = convert(num, 16, 0);
        int count = 0;

        if (f -> hash == 1 && str[0] != '0')
                count += _puts("0X");
                count += _puts(str);
                return (count);
}

/**
 *print_binary - function to print numbers in base 2
 * @l : va_list argument from _printf
 * @f : is  pointer to the struct flags
 * Return : return the number of character printed
 */

int print_binary(va_list l, flags_t *f)
{
        unsigned int num = va_arg(l, unsigned int);
        char *str = convert(num, 2, 0);
	(void) f;
	return (_puts(str));
}

/**
 * print_octal - function to print numbers in octal bases
 * @l : va_list argument from _printf
 * @f : is  pointer to the struct flags
 * Return : return the number of character printed
 */

int print_octal(va_list l, flags_t *f)
{
        unsigned int num = va_arg(l, unsigned int);
        char *str = convert(num, 8, 0);
        int count = 0;

        if (f -> hash == 1 && str[0] != '0')
                count += _putchar('0');
                count += _puts(str);
                return (count);
}




