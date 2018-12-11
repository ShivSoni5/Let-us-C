#include <stdio.h>
#define k 5

int main() {
	int arr[k];
	int i,n;

	for (i=0;i<k;i++) {
		printf("Enter %d value: ",i+1);
		scanf("%d", &arr[i]);
	}

	printf("Enter number to be searched: ");
	scanf("%d",&n);

	for (i=0;i<k;i++) {
		if (arr[i]==n) {
			printf("Present!");
			break;
		}
		else printf("not present!");
	}

}
