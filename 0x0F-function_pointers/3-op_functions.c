#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds as declared in the headerfile 
 * @a: int a
 * @b: int b
 * Return: sum oafter calculation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts as declared in the headerfile
 * @a: int a
 * @b: int b
 * Return: difference after calculation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies as declared in the headerfile
 * @a: int a
 * @b: int b
 * Return: answer after multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division as declared in the headerfile
 * @a: int a
 * @b: int b
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulos as declared in the headerfile
 * @a: int a
 * @b: int b
 * Return: modulo of int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
