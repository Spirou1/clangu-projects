#include <stdio.h>

int main()
{
    float share_price = 0.0, value = 0.0, commission = 0.0, rival_commission = 0.0;
    int shares = 0;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter the price of each share: ");
    scanf("%f", &share_price);


    value = shares * share_price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;


    if (shares < 2000) {
        rival_commission = 33.00f + 0.03f * shares;
    } else {
        rival_commission = 33.00f + 0.02f * shares;
    }

    
    printf("Original broker commission: $%.2f\n", commission);
    printf("Rival broker commission:    $%.2f\n", rival_commission);


    return 0;
}
