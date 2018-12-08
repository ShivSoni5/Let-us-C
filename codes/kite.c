#include <stdio.h>

int main()
{
	int i,n,j,s,k;
	n = 4;

	for (i=1; i<=n; i++)
	{
		for (s=n; s>=i; s--)
		{
			printf(" ");
		}
		for (j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		for (k=i-1; k>=1; k--)
		{
			printf("%d", k);
		}
		printf("\n");
	}
	for (i=n-1; i>=1; i--)
	{
		for (s=n; s>=i; s--)
		{
			printf(" ");
		}
		for (j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		for (k=i-1; k>=1; k--)
		{
			printf("%d", k);
		}
		printf("\n");
	}
}
