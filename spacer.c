/*
 * program created to learn C
 * it takes a text and prints a int number of spaces
 * after each line
 */

#include <stdio.h>
#include <stdlib.h>

int spaces;
char *argv0;

static void
usage(void)
{
	fprintf(stderr, "usage: %s -s <SPACE>\n", argv0);
	exit(1);
}

int
main(int argc, char *argv[]) 
{
	argv0 = argv[0];

	int i;

		for (i = 0; i < argc; i++) {
			if (strcmp(argv[i], "-s") == 0) {
	            spaces = atoi(argv[++i]);
			} else if (strcmp(argv[i], "-h") == 0) {
				usage();
			} else {
				spaces = 4;
			}
		}

	char c;

	printf("%*c", spaces, ' ');
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			printf("\n%*c", spaces, ' ');
		}
		else {
			putchar(c);
		}
	}
	printf("\n");
	return 0;
}
