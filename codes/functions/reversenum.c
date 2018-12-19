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
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Reverse of the number: ");
	/*while(n != 0) {
		printf("%d",n%10);
		n /= 10;
	}
	printf("\n");*/
	printf("%d\n",reverse(n));
}
