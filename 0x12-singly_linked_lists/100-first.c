#include <stdio.h>

void first(void)_attribute_((constructor));
/**
 * first - prints a sentence before the main
 * function is excuted
 */
void first(void)
{
printf("you are the best!, you must allow,\n");
printf("I bore my house upon my back!\n");
}
