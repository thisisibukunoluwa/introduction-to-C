#include <stdio.h>

int main () {
	
	// variable declaration and initialization
	int accountNumber = 0;
	int mortgageAmount = 0;
	int mortgageTerm = 0;
	float interestRate = 0;				// because interest rate is a decimal number
	int totalInterestPayable = 0;
	int totalAmountPayable = 0;
	int monthlyPayment = 0;
	
	while (accountNumber != -1) {
		// ask the user for the account number
		
		printf("%s", "Enter account number (or -1 to end): ");
		scanf("%d", &accountNumber);
		
		if (accountNumber == -1) {
			// The user wants to exit the program
			printf("%s", "Thank you for using our Mortgage Calculator");
			return 0;
		}
		
		// ask the user for the mortgage amount
		printf("%s", "Enter mortgage amount (in dollars): ");
		scanf("%d", &mortgageAmount);
		
		// ask the user for the mortgage term
		printf("%s", "Enter mortgage term (in years): ");
		scanf("%d", &mortgageTerm);
		
		// ask the user for interest rate
		printf("%s", "Enter interest rate (in decimals): ");
		scanf("%f", &interestRate);
		
		// calculate total interest and total amount
		totalInterestPayable = mortgageAmount * interestRate * mortgageTerm;
		totalAmountPayable = mortgageAmount + totalInterestPayable;
		
		// calculate monthly payment
		/*
		NOTE: We don't need to do any type casting, because the problem said we should round down to the
		nearest dollar.
		*/
		monthlyPayment = totalAmountPayable / (mortgageTerm * 12);
		
		
		// print results
		printf("The monthly payment required is $%d ", monthlyPayment);
		
		// make space for the next set of values
		printf("%s", "\n\n");
	}
	return 0;
}


//test examples 