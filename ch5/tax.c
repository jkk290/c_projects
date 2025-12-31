/* Displays the tax due for a given taxable income based off one state */

#include <stdio.h>

int main(void)
{
	float income, tax_due;
	printf("Enter amount of taxable income: ");
	scanf("%f", &income);

	if (income > 7000.00f) {
		tax_due = 230.00f + ((income - 7000.00f) * 0.06f);
	} else if (income > 5250.00f) {
		tax_due = 142.50f + ((income - 5250.00f) * 0.05f);
	} else if (income > 3750.00f) {
		tax_due = 82.50f + ((income - 3750.00f) * 0.04f);
	} else if (income > 2250.00f) {
		tax_due = 37.50f + ((income - 2250.00f) * 0.03f);
	} else if (income > 750.00f) {
		tax_due = 7.50f + ((income - 750.00f) * 0.02f);
	} else {
		tax_due = income * 0.01f;
	}

	printf("Tax due: $%.2f\n", tax_due);

	return 0;
}
