#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return:Always 0 (Success)
 */

int main(void)

{
	int low;

	for  (low = 'Z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
