#include <stdio.h>

int main()
{
	float loan = 0, interest_rate = 0, monthly_payment = 0, monthly_rate = 0, balance1 = 0, balance2 = 0, balance3 = 0;

	printf("Enter the amount of loan: \n");
	scanf("%f", &loan);
	printf("Enter the interest rate: \n");
	scanf("%f", &interest_rate);
	printf("Enter the monthly payment: \n");
	scanf("%f", &monthly_payment);

	monthly_rate = (interest_rate / 100) / 12;
	balance1 = loan - monthly_payment + (loan * monthly_rate);
	balance2 = balance1 - monthly_payment + (balance1 * monthly_rate);
	balance3 = balance2 - monthly_payment + (balance2 * monthly_rate);			



	printf(" -------------------------\n");
	printf("Balance remaining after first payment: %.2f\n", balance1);
	printf("Balance after second payment: %.2f\n", balance2);
	printf("Balnce after third payment: %.2f\n", balance3);	


return 0;
}
