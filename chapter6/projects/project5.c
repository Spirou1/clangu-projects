#include <stdio.h>

int main()
{
   int number, digit;

   printf("Enter a number: ");
   scanf("%d", &number);

   printf("Reversed number: ");

   do {
        digit = number % 10;
        printf("%d", digit);
        number = number / 10;

   } while (number != 0);

    printf("\n");


    return 0;
}
