#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main - It prints the sum of arguments
 *@argv: ar vector
 *@argc: arg counts
 *Return: 0 Always
 */
int main(int argc, char *argv[])
{
int i;
unsigned int k, sum = 0;
char *e;
if (argc > 1)
{
for (i = 0; i < argc; i++)
{
e = argv[1];
for (k = 0; k < strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
