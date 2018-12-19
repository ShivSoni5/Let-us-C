#include <stdio.h>

int reverse(int n){
	int a=0;
	while(n!=0){
		a = a*10 + n%10;
		n /= 10;
	}
	return a;
}

int main() {
	int a,n;
	printf("Enter the number: ");
	scanf("%d", &n);
	a = reverse(n);
	if (a==n)
		printf("Number is palindrome\n");
	else printf("Number is not a palindrome\n");
}
