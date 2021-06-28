/* my first c program */

#include <stdio.h>

int main(int argc, char *argv[]) {

	int n;	/* integer */
	char c;	/* character */
	short s;
	long l;
	float f;
	double d;

	printf("%ld\n", sizeof(n));
	printf("%ld\n", sizeof(c));
	printf("%ld\n", sizeof(s));
	printf("%ld\n", sizeof(l));
	printf("%ld\n", sizeof(f));
	printf("%ld\n", sizeof(d));
	printf("Hello, World \n");
	return 0;

}
