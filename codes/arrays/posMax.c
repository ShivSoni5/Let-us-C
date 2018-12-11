#include <stdio.h>

int main() {
	int a[5] = {233,3,4,44,623};
	int max = a[0];
	int pos;
	for (int i=1;i<5;i++) {
		if (max < a[i]) {
		     	max = a[i];
			pos = i;
		}
	}
	printf("position of max %d is %d\n",max,pos);
}
