#include "main.h"

/**
 * get_flag - function to turn all flags if _printf finds a flag modifier in
 * the string format
 * @s : character to hold the flag specifier
 * @f : pointer to the struct flags
 * Return : return 1 if flag has been turned on or 0 if otherwise
 */

int get_flag(char s, flags_t *f)
{
        int i = 0;

                switch (s)
                {
                        case '+':
                        f->plus = 1;
                        i = 1;
                        break;

                        case ' ':
                        f->space = 1;
                        i = 1;
                        break;

                        case '#':
			f->hash = 1;
			i = 1;
			break;
		}
	return (i);

}
