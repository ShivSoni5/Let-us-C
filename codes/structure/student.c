#include <stdio.h>

typedef struct student {
	int id;
	char name[30];
}student;

void read(student *s) {
	printf("Enter ID = ");
	scanf("%d", &s -> id);
	printf("Enter name = ");
	scanf("%s", &s -> name);
}

void show(student s) {
	printf("%d %s\n", s.id, s.name);
}

void main() {
	student s1,s2;
	read(&s1);
	read(&s2);
	show(s1);show(s2);
}

