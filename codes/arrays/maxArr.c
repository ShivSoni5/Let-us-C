#include <stdio.h>

int main() {
	int a[5] = {233,3,4,44,6};
	int max = a[0];
	for (int i=1;i<5;i++) {
		if (max < a[i]) max = a[i];
	}
	printf("%d\n",max);
}
