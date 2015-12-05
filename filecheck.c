/* CHEK IF FILE IS EMPTY */
#include <stdio.h>

int main (void)
{
	FILE *fp;
	char *path = "test";
	long size;
	fp = fopen(path, "r");
 
	if (fp) {
		fseek (fp, 0, SEEK_END);
		size = ftell(fp);
		if (size == 0) {
			printf("File is empty\n");
		} else
		printf("File isn't empty\n");
		printf("Size of the file in bytes: %lu\n", size);
		fclose(fp);
	}
	return 0;
}
