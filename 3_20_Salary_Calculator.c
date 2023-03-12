#include <stdio.h>

int main () {
	// variable declarations
	int hoursWorked = 0;
	int overtimeHours = 0;
	float hourlyRate = 0;
	float overtimeRate = 0;
	float overtimePay = 0;
	float salary = 0;
	
	while (hoursWorked != -1) {
		salary = 0;		// clear the salary variable of former data
		
		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%d", &hoursWorked);
		
		if (hoursWorked == -1) {
			// User wants to exit the program
			printf("Thank you for using our Salary Calculator");
			return 0;
		}
		
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourlyRate);
		
		if (hoursWorked <= 40) {
			salary = (hoursWorked * hourlyRate);
		}
		else if (hoursWorked > 40) {
			salary = (40 * hourlyRate);		// Pay the straight rate for the 40 hours
			
			overtimeHours = hoursWorked - 40;	// Calculate the extra hours the worker worked
			
			overtimeRate = 1.5 * hourlyRate;	// Calculate the rate for the new hours - "time and a half"
			
			overtimePay = overtimeHours * overtimeRate;  // calculate the extra money earned 
			
			salary = salary + overtimePay;		// add regular and overtime pay together
		}
		
		// display salary
		printf("Salary is $%.2f", salary);
		
		printf("%s", "\n\n");
	}
}
