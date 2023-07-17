#include <stdio.h>

/**
 *main - it prints the name of the file
 *Return: 0 Always
 */

int main(void)
{
char *filename = __FILE__;
printf("%s\n", filename);
return (0);
}
