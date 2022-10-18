#include <main.h>
#include <unistd.h>

/**
 * _putchar - function to write character c to stdout
 * @c : the character to print 
 * Return : return 1 if success or -1 if failed and set errno appropriately
 */
 
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i=0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
 
/**
 * _puts - function to print a string to stdout
 * @str : pointer to the string parameter
 * Return : return the string written
 */

int _puts(char *str)
{
	register int i;
	
	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
	return (i);
}
