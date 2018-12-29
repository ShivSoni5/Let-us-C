#include <stdio.h>

int main() {
	int i = 1, j=2;
	switch(i)
	{
		case 1:
			printf("case 1");
			break;
		case 1*2+4:  // operation is allowed here but not variable
			printf("1*2+4");
			break;
	}
}
