#include <stdio.h>

int main() {
	int i,j,n;
	n = 4;
	char ch;
	for (i=n;i>=1;i--) {
		ch = 'a';
		for(j=1;j<=i;j++) {
			printf("%c",ch);
			ch++;
		}

		for (int s=n; s>i;s--) {
			printf("..");
		}
		
		printf("\b");
		--ch;
		for (j=1;j<=i;j++) {
			printf("%c", ch);
			ch--;
		}
		printf("\n");
	}
}
