/* Calculates the remaining balance on a loan after the first 3 payments */

#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	
	float first_balance, second_balance, third_balance;
	float monthly_interest_rate = (interest_rate / 100) / 12.0;
	first_balance = loan_amount - monthly_payment + (loan_amount * monthly_interest_rate);
	second_balance = first_balance - monthly_payment + (first_balance * monthly_interest_rate);
	third_balance = second_balance - monthly_payment + (second_balance * monthly_interest_rate);

	printf("Balance remaining after first payment: $%.2f\n", first_balance);
	printf("Balance remaining after second payment: $%.2f\n", second_balance);
	printf("Balance remaining after third payment: $%.2f\n", third_balance);

	return 0;
}

