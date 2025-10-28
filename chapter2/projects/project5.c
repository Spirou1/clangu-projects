#include <stdio.h>

int main()
{
	int x = 0, value = 0, x_squared, x_cube, x_fourth, x_fifth;
	
	printf("Please enter the value of x: \n");
	scanf("%d", &x);

	x_squared = x * x;
	x_cube = x * x * x;
	x_fourth = x * x * x * x;
	x_fifth = x * x * x * x * x;
	
	value = 3 * x_fifth + 2 * x_fourth - 5 * x_cube - x_squared + 7 * x - 6;
	printf("The value of the polynomial is: %d\n", value);

return 0;
}
