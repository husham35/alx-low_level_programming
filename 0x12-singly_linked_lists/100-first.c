#include <stdio.h>

/**
 * before_main - executes statement in this function before running main block
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
