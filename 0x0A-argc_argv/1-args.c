#include <stdio.h>

/**
 *main - Prints the number of arguments
 *@argv:args vector
 *@argc:args count
 *Return: 0 Always
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
