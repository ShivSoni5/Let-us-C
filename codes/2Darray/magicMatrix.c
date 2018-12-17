#include <stdio.h>

int main() {
	int i,j,k;
	int a[3][3];
	i=j=0;
	k =1 ;
	while (k<=9){ 
		if ((a[i][j])/3 == 0){
			a[i][j]=k;
			i=i+1;
			if(i>2)
				i=0;
			continue;
		}
		a[i][j] = k;
		i = i+2;
		j=j-1;
		if(i>2)
			i=0;
		else if(j<0)
			j=2;
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
