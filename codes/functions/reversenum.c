#include <stdio.h>

int main() {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Reverse of the number: ");
	while(n != 0) {
		printf("%d",n%10);
		n /= 10;
	}
	printf("\n");
}
