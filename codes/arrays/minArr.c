#include <stdio.h>

int main() {
	int a[5] = {233,3,0,44,6};
	int min = a[0];
	for (int i=1;i<5;i++) {
		if (min > a[i]) min = a[i];
	}
	printf("%d\n",min);
}
