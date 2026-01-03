/* Calculates the remaining balance on a loan after n payments */

#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_payment;
	int payments;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Enter the amount of payments: ");
	scanf("%d", &payments);
	
	float monthly_interest_rate = (interest_rate / 100) / 12.0;

	for (int i = 1; payments > 0; payments--) {
		loan_amount = (loan_amount - monthly_payment) + (loan_amount * monthly_interest_rate);
		printf("Balance after %d payment(s): %.2f\n", i, loan_amount);
		i++;
	}

	return 0;
}

