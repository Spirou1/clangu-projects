#include <stdio.h>

int main()
{
	int amount = 0, twenties = 0, tens = 0, fives = 0, ones = 0;

	printf("Enter the amount of dollars: \n");
	scanf("%d", &amount);

	twenties = amount / 20;
	amount = amount % 20;

	tens = amount / 10;
	amount = amount % 10;
	
	fives = amount / 5;
	amount = amount % 5;

	ones = amount;

	printf("Twenties: %d\n", twenties);
	printf("Tens: %d\n", tens);
	printf("Fives: %d\n", fives);
	printf("Ones: %d\n", ones);

return 0;
}
