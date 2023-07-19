#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 * @f: function associated
 * @op: operator
 */

typedef struct op
{
char *op;
int (*f)(int a, int b);
}
op_t;
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
#endif
