#include <stdio.h>

void main() {
	int n = 10;
	int *p = &n;
	printf("&n = %u\n",&n);
	printf("&p = %u\n",&p);
	printf("p = %u\n", p);
	printf("n = %d\n", n);
	printf("*p = %d\n",*p);
}
