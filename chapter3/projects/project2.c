#include <stdio.h>

int main()
{
	int number, day, month, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item \t Unit \t\t Purchase\n");
	printf("\t Price \t\t Date\n");
	printf("%d \t $ %.2f \t %d/%.2d/%d\n", number, price, month, day, year);


return 0;
}
