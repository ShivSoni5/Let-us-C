#include <stdio.h>

int main() {
	char str[30] = "jaipur";
	int i;
	for(i=0; str[i]!='\0';i++);
	printf("%d\n",i);
}
