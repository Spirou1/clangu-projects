#include <stdio.h>

int main()
{
	int d, g11, g12, g13, g14, g15, g21, g22, g23, g24, g25, first_sum, second_sum, total;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &g11, &g12, &g13, &g14, &g15, &g21, &g22, &g23, &g24, &g25);

	first_sum = d + g12 + g14 + g21 + g23 + g25;
	second_sum = g11 + g13 + g15 + g22 + g24;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));	



return 0;
}
