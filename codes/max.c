#include <stdio.h>

int main() {
	int i,j,k;
	printf("Enter 3 nums:");
	scanf("%d %d %d", &i, &j, &k);
	//printf("%d %d %d\n", i,j,k);
	if (i>j) {
		if (i>k) printf("%d\n", i);
		else printf("%d\n",k);
	}
	else {
		if (j>k) printf("%d\n", j);
		else printf("%d\n",k);
	}
}
