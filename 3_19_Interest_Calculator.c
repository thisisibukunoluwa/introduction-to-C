#include <stdio.h>

int main () {
	
	// variable declarations
	
	float principal = 0;
	float rate = 0;
	int days = 0;
	float interestCharge = 0;
	
	while (principal != -1) {
		printf("%s", "Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		
		if (principal == -1) {
			// User wants to exit the program
			
			printf("%s", "Thank you for using our Interest Calculator");
			return 0;
		}
		
		printf("%s", "Enter annual interest rate: ");
		scanf("%f", &rate);
		
		printf("%s", "Enter term of the loan in days: ");
		scanf("%d", &days);
		
		// calculate interest charge using formula (p * r * days) / 365
		interestCharge = (principal * rate * days) / 365;
		
		printf("The interest charge is $%.2f", interestCharge);
		
		printf("%s", "\n\n");
	}
}
