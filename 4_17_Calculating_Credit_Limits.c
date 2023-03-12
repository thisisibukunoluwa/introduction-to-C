#include <stdio.h>

int main () {
	// declare variables
	int accountNumber;
	float oldCreditLimit;
	float currentBalance;
	float newCreditLimit;
	
	int i;
	
	for (i = 0; i < 3; i++) {
		printf("%s", "Enter account number: ");
		scanf("%d", &accountNumber);
		
		printf("%s", "Enter old credit limit: $");
		scanf("%f", &oldCreditLimit);
		
		printf("%s", "Enter current balance: $");
		scanf("%f", &currentBalance);
		
		newCreditLimit = oldCreditLimit / 2;
		printf("This customer's new credit limit is $ %.2f \n", newCreditLimit);
		
		if (currentBalance > newCreditLimit) {
			printf("%s", "This customer's balance exceeds the new credit limit");
		}
		
		printf("%s", "\n\n");
	}
	return 0;
}
