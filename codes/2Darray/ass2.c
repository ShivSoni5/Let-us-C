#include <stdio.h>

#define r 3
#define c 3

int main() {
	int m[r][c],i,j,k;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			printf("Enter %d row %d element: ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	for (i=0;i<r;i++){
		for (k=0;k<i;k++){
			printf("\t");
		}
		for(j=i;j<c;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
