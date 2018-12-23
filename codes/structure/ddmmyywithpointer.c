#include <stdio.h>

typedef struct date {
	int day;
	char month[20];
	int year;
}date;

void main() {
	date d1 = {23, "December", 2018};
	date *p = &d1;
	printf("%d ", p -> day);
	printf("%s %d\n", p -> month,p -> year);
}

