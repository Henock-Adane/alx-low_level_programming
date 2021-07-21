#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: given name
 * @f: paramter for the function pointer
 * Return: Novalue
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
