#include <stdio.h>
#include "main.h"

/**
 *main - Prints the arguments content
 *@argc: arguments count
 *@argv: arguments vector
 *Return: 0 Always
 */

int main(int argc, char *argv[])
{
for (int i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
