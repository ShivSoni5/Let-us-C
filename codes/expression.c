#include <stdio.h>

int main() {
	int x = 10, y=20, z=5, i;
	i = x < y <z;
	printf("\n%d", i);  // output 1 because The result of (x < y) is either 0 or 1,
}      			    // both of which are less than z, so the overall condition is true.
