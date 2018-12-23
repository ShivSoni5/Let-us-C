#include <stdio.h>
#include <stdlib.h>

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
	int i,n;
	printf("Enter the number of students: ");
	scanf("%d\n",&n);
	student *s;
	s = malloc(sizeof(student)*n);

	for(i=0; i<n; i++) {
		read(&s[i]);
	}
	for(i=0; i<n; i++) {
		show(s[i]);
	}
	free(s);
}

