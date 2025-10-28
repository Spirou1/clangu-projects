#include <stdio.h>

int main()
{
	int year, month, day;

	printf("Enter a date: (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%d%.2d%d\n", year, month, day);

return 0;
}
