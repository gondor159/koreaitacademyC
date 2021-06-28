#include <stdio.h>
#include <stdlib.h>
int isPrime(int x) {
	for(int i = 2; i < x; i++) {
		if(x % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char* argv[]) {
	for(int i = 2; i < atoi(argv[1]); i++) {
		if(isPrime(i) == 1) printf("%d\n", i);
	}
}
