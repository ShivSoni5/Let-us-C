#include <stdio.h>

void main() {
	int b;
	b = f(20);
	printf("%d",b);
}

int f(int a) {
	a>20 ? return(10) : return(20);  // return statement cannot be used with conditional operators
}
