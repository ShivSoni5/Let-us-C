#include <stdio.h>

void main() {
	int a = 10;
	void f();
	a = f();
	printf("\n%d",a);
}

void f() {
	printf("\nHi");
}
