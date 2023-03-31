#include <stdio.h>
void __attribute__((constructor)) _printf(void);
/**
 * _printf - prints before main function
 */
void _printf(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
