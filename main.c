#include <stdio.h>
#include <stdlib.h>
#include "count.h"

int main(int argc, char **argv) {
	printf("Hello\n");
	printf("1 + 1 = %d\n", count(1, 1));
	printf("2 - 1 = %d\n", decr(2, 1));
	exit(EXIT_SUCCESS);
}
