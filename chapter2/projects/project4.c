#include <stdio.h>

int main()
{
	float amount = 0;

	printf("Please enter the amount dollars and cents: \n");
	scanf("%f", &amount);
	printf("Amount with tax added: %.2f\n", amount * 1.05);


return 0;
}
