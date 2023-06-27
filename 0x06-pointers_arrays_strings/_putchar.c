#include <unistd.h>

/*It prints the character c 
 *
 *
 *
 *Return: 1 (success)
 *On error, -1 is returned , and errno is set appropriatly. 
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
