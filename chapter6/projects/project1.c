#include <stdio.h>

int main()
{
    float largest_number, current_number;

    largest_number = 0.0;


    do {
        printf("Enter a number: ");
        scanf("%f", &current_number);

        if (current_number > largest_number) {
            largest_number = current_number;
        }
    } while (current_number > 0);

    printf("The largest number entered was %.2f\n", largest_number);

    return 0;
}
