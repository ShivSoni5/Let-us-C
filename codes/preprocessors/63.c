#include <stdio.h>
#define SQR(x) ((x)*(x))

int main()
{
	int a, b=3;
	a = SQR(b+2);
	printf("\n%d",a);  // print 11 if SQR(x) (x * x)
}
