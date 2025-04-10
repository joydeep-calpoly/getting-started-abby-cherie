#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 3) {
		fprintf(stderr, "Usuage: %s <count> <string>\n", argv[0]);
		return 1;
	}
	
	char *endptr;
	long count = strtol(argv[1], &endptr, 10);

	if (*endptr != '\0' || count < 0) {
		fprintf(stderr, "First argument must be a non-negative integer.\n");
		return 1;
	}

	for (int i = 0; i < count; i++) {
		printf("%s\n", argv[2]);
	}
	return 0;
}
