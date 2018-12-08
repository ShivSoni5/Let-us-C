#include <stdio.h>

int main() {
	int n,s,j;
	n = 4;
	
	for (int i = 1 ; i <= n; i++)
	{
		for (s = n; s>= i; s--)
		{
			printf(" ");
		}
		for (j = 1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

