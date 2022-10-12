#include "function_pointers.h"
/**
 * print_name - This function prints a name in many cases
 * @name: string literal
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if((f == 0) || (name == 0))
		return;
	f(name);
}
