#include <stdio.h>

int main() {
	char str[30] = "jaipur is my home town";
	int i,j;
	for(i=0; str[i]!='\0';i++);
	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
}
