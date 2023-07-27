#include <stdio.h>

/**
 * myStartupFun - Function to be executed before main
 * Constructor function
 */

oid myStartupFun(void) __attribute__((constructor));

void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
