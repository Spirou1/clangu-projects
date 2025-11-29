#include <stdio.h>

int main()
{
    float income_amount = 0.0, tax = 0.0;


    printf("Enter your income: ");
    scanf("%f", &income_amount);

    if (income_amount < 0) {
        printf("Income may not be negative\n");
    } else if (income_amount < 750) {
        tax = income_amount * 0.01;
    } else if (income_amount >= 750 && income_amount < 2250) {
        tax = 7.50 + (income_amount * 0.02);
    } else if (income_amount >= 2250 && income_amount < 3750) {
        tax = 37.50 + (income_amount * 0.03);
    } else if (income_amount >= 3750 && income_amount < 5250) {
        tax = 82.50 + (income_amount * 0.04);
    } else if (income_amount >= 5250 && income_amount <= 7000) {
        tax = 142.50 + (income_amount * 0.05);
    } else if (income_amount > 7000) {
        tax = 230.0 + (income_amount * 0.06);
    }

    printf("Your tax is: $%.2f\n", tax);


    return 0;
}
