#include "function_pointers.h"

/**
*print_name - this is the name to print
*@name:name
*@f: function which print name
*/

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;

f(name);

}
