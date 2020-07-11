#include <stdio.h>

int main(void) {
	int grade;
	scanf("%d", &grade);

	if (101 > grade && grade > 89)
		printf("A");

	else if (grade > 79)
		printf("B");

	else if (grade > 69)
		printf("C");

	else if (grade > 59)
		printf("D");
	
    else
		printf("F");

	return 0;
}