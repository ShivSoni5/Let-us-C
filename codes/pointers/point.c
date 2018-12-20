#include <stdio.h>

int main() {
	int a[5] = {10,20,30,40,50};
	int *p  = a,i;  // a can be written as &a[0] or &a

	for(i=0;i<5;i++){
		printf("%d\n",*p);
		p++;
	}
}
