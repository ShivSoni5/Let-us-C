#include <stdio.h>

//#define n 5  // Correct method in C.

int main() {
	int b =5;  //doesn't produce error in new compilers.
		   //But will produce in old comppilers.
	int a[b], sum;
	sum = 0;
	for (int i=0;i<b;i++) {
		printf("Enter %d value: ",i+1);
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("Sum is %d\n",sum);
}
