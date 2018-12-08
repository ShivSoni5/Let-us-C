#include <stdio.h>

main() {
	int i,n,j,k,s;
	n = 4;

	for (i=1; i<=n; i++) {
		for (s=n; s>=i; s--) {
			printf(" ");
		}
		for (j=i; j<=i+i-1; j++) {
			printf("%d", j);
		}
		for (k=i+i-2; k>=i; k--) {
			printf("%d",k);
		}
		printf("\n");
	}
}
