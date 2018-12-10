#include <stdio.h>

int main() {
	int i,j;
	printf("Enter 2 nums: ");
	scanf("%d %d", &i, &j);
	printf("Before:\ni=%d j=%d\n", i,j);
	int k = i;
	i = j;
	j = k;
	printf("After:\ni=%d j=%d\n", i,j);
}
