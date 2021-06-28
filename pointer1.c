#include <stdio.h>

void change1(int x) {
	x = 100;
}

void change2(int* x) {
	*x = 100;
}

int main(int argc, char *argv[]){
	
	int n;
	int *p; // 포인터 : 주소 값을 담아줌,메모리 공간을 찾아줌

	n = 5;
	printf("%d, 0x%x\n", n, &n);

	p = &n;	// & 해당 변수의 메모리 주소를 반환함.
	printf("0x%x, %d\n", p, *p);

	change1(n);
	printf("%d\n", n);

	change2(&n);
	printf("%d\n", n);

	return 0;

}
