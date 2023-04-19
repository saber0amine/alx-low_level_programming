/**
 *description :  print_name : function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
