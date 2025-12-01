#include <stdio.h>

int main()
{
    float loan = 0, interest_rate = 0, monthly_payment = 0, monthly_rate = 0, balance = 0;
    int number_payments;

    printf("Enter the amount of loan: ");
    scanf("%f", &loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter the number of payments: ");
    scanf("%d", &number_payments);

    monthly_rate = (interest_rate / 100) / 12;

    for (int i = 0; i < number_payments; i++) {
       
       balance = loan * (1 + monthly_rate) - monthly_payment;

       loan = balance;

       printf("Balance remaining after payment number %d: $%.2f\n", i + 1, balance);
    }

    return 0;
}
