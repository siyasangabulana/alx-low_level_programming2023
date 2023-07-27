#include <stdio.h>
void myStartupFun(void) __attribute__((constructor));
/**
 * myStartupFun - Function to be executed before main
 */
void __attribute__((constructor)) print_message(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
