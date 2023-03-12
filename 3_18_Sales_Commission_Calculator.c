#include <stdio.h>

int main() {
	// variable declarations. All variables are floats because they can have decimals (i.e cents)
	float sales = 0;
	float commission = 0;
	float earnings = 0;
	
	while (sales != -1) {
		printf("%s", "Enter sales in dollars (or -1 to end): ");
		scanf("%f", &sales);
		
		if (sales == -1) {
			// User wants to exit the program
			printf("%s", "Thank you for using our Sales Commission Calculator");
			return 0;
		}
		
		commission = sales * 0.09;		// 9% of sales
		earnings = commission + 200;	// commission + $200 bonus
		
		printf("Salary is: $%.2f", earnings);
		printf("%s", "\n\n");
	}
}
