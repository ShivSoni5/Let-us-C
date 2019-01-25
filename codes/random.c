#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int main() {
	int i;
	srand(time(NULL));
	for (i=0;i<5; i++) {
		printf("%d\n",rand()%10+1);
	}
	return 0;
}
