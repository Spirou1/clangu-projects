#include <stdio.h>

int main()
{
	int gs1, group_id, publisher_code, item_number, check_digit;
	printf("Enter the ISBN number (XXX-XX-XXXXX-XX-X): ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher_code, &item_number, &check_digit);

	printf("GS1 Prefix: %d\n", gs1);
	printf("Group Identifier: %d\n", group_id);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check_digit);


return 0;
}
