/*
 * Program to uncomment C files:
 * Only work with well placed comments
 *
 * Contact:
 * Henrique Lengler <henriqueleng@opmbx.org>
 *
 * DO WHATAFUCK YOU WANT WITH THIS FILE!
 */

#include <stdio.h>
#include <err.h>

int main(void)
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '/') {
			c = getchar();
			if (c == '*') {
				while (c != '*') {
					c = getchar();
				}
				while (c != '/') {
					c = getchar();
				}
				c = getchar();
				if (c == '\n')
					putchar(c);
			} else {
				putchar(c);
			}
		} else {
			putchar(c);
		}
	}
	return 0;
}
