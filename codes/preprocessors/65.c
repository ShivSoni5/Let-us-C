#include <stdio.h>
#define CUBE(x) (x*x*x)

int main()
{
	int a, b=3;
	a = CUBE(b++);
	printf("%d\n%d\n",a,b);  // print 11 if SQR(x) (x * x)
}
