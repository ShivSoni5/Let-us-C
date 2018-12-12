#include <stdio.h>

int main() {
	char str[20] = "jaipur hello world";
	int i,j;
	j =0;
	for (i=0;str[i]!='\0';i++){
		if (str[i] == 'a' || str[i] =='e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
			j += 1;
		}
	}
	printf("%d\n",j);
}

