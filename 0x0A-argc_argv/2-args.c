#include <stdio.h>
/**
 *Print each argument followed by a new line
 * Iterate over each argument using a loop
 *Return: 0 Always
 */


int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
