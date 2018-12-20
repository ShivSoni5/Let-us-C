#include  <stdio.h>

void main() {
	int i = 10;
	char ch;
	printf("%li\n",sizeof(int));
	printf("%ld\n",sizeof(i));
	printf("%zu\n",sizeof(10));
	printf("%li\n",sizeof(char));
	printf("%li\n",sizeof(ch));
	printf("%d\n",sizeof('a'));
}
