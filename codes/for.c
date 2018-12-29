#include <stdio.h>

int main() {
	int i=1;
//	for(;;)  // infinite loop
	while( )  // error : condition in while loop is must
	{
		printf("%d",i++);
		if(i>10)
			break;
	}
}
