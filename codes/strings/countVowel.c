#include <stdio.h>

int main() {
	char str[20] = "aaaaaaaaaaaaaaaaaaaaaa";  // warning as characters are more than 20!
	char inthis[30];
	printf("Enter string: ");
	gets(inthis);
	int i,j;
	j =0;
	for (i=0;inthis[i]!='\0';i++){
		if (inthis[i] == 'a' || inthis[i] =='e' ||inthis[i] == 'i' ||inthis[i] == 'o' ||inthis[i] == 'u'){
			j += 1;
		}
	}
	printf("%d\n",j);
}

