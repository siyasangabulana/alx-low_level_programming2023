#include <unistd.h>

/*It prints the character c 
 *
 *Return: 1 (success)
 */

int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}
