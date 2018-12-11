#include <stdio.h>

int main() {
	int a[50];
	int n,i,j;
	scanf("%d",&n);
	i = 0;
	while (n>0) {
		a[i] = n%2;
		n /= 2;
		i = i+1;
	}
	for (j=i-1;j>=0;j--) {
		printf("%d",a[j]);
	}
	printf("\n");
}
