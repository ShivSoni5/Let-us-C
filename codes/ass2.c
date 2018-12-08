#include <stdio.h>

int main() {
	int i,n,j,s,k;
	n = 4;

	for (i=1; i<=n; i++)
	{
		for (s=n; s>=i; s--)
		{
			printf(" ");
		}
		for (j=n; j>=n-(i-1) ; j--) {
			printf("%d", j);
		}
		for (k=n-(i-2); k<=n ; k++) {
			printf("%d", k);
		}
		printf("\n");
	}
}


