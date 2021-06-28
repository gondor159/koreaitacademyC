#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

	if((atoi(argv[1]) % 2) == 0) printf("even\n");
	else printf("odd\n");
	return 0;
}
