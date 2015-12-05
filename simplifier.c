#include <stdio.h>
#include <stdlib.h>

char *argv0;

static void
usage(void)
{
	fprintf(stderr, "usage: %s <x/y>\n", argv0);
	exit(1);
}

int
main(int argc, char *argv[])
{
	argv0 = argv[0];

	if (argc <= 1)
		usage();

	int divisor = 2;
	int x = strtol(argv[1], NULL, 10);
	int y = strtol(argv[2], NULL, 10);

	while (divisor <= x || divisor <= y) {
		if (x % divisor == 0 && y % divisor == 0) {
			x = x / divisor;
			y = y / divisor;
		} else {
			divisor++;
		}
	}

	printf("%i %i\n", x, y);
}
