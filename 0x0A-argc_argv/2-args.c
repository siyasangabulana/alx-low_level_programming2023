#include <stdio.h>
/**
 *main - Print each argument followed by a new line
 * Iterate over each argument using a loop
 *Return: 0 Always
 */


int main(int argc, char *argv[])
{
int i;
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
