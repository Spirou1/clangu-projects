#include <stdio.h>

int main()
{
    int number, square = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; square < number; i++) {
        square = i * i;
        if (square % 2 == 0) {
            printf("%d\n", square);
        }
    }

    return 0;
}
