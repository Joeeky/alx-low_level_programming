/**
 * _putchar - write the character c to stdout
 * @c The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and error id set well
 */
int _putchar(char c)
{
     return (write(1, &c, 1));
}
