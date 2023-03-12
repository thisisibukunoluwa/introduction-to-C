#include <stdio.h>

int main () {
	// declare variables
	int barWidth = 0;
	
	int count = 0;
	
	printf("%s", "Enter five values below: \n");
	
	// the book said accept only five numbers
	
	for (count = 0; count < 5; count++) {
		scanf(" %d", &barWidth);
		
		int i;
		
		// print out the required number of *
		for (i = 0; i < barWidth; i++) {
			printf("%s", "*");
		};
		
		printf("%s", "\n");
	}
	return 0;
}
