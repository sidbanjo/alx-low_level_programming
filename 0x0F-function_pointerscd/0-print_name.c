/**
 * print_name - prints a name
 * @name: name to print
 * @f: print function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
