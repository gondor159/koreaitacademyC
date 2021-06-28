#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;

	while(1) {
		printf("%d\n", n);
		n++;
		if(n == 10) break;
	}
	
	return 0;
}
