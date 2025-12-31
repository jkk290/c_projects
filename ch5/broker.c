/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
	int shares;
	float share_price, commission, value;

	printf("Enter number of shares sold: ");
	scanf("%d", &shares);
	printf("Enter price per share: ");
	scanf("%f", &share_price);

	value = shares * share_price;

	if (value < 2500.00f) {
		commission = 30.00f + 0.17f * value;
	} else if (value < 6250.00f) {
		commission = 56.00f + .0066f * value;
	} else if (value < 20000.00f) {
		commission = 76.00f + .0034f * value;
	} else if (value < 50000.00f) {
		commission = 100.00f + .0022f * value;
	} else if (value < 500000.00f) {
		commission = 155.00f + .0011f * value;
	} else {
		commission = 255.00f + .0009f * value;
	}

	if (commission < 39.00f) {
		commission = 39.00f;
	}

	printf("Commission: $%.2f\n", commission);

	float rival_commission;

	if (shares < 2000) {
		rival_commission = 33.00f + shares * 0.03f;
	} else {
		rival_commission = 33.00f + shares * 0.02f;
	}

	printf("Rival commission: $%.2f\n", rival_commission);

	return 0;
}
