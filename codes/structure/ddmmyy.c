#include <stdio.h>

typedef struct date {
	int day;
	char month[20];
	int year;
}date;

void main() {
	date d1 = {23, "December", 2018}, d2;
	printf("%d ", d1.day);
	printf("%s %d\n", d1.month,d1.year);
}

