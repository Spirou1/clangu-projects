#include <stdio.h>

int main()
{
    int n;
    float e = 1; 
    float term;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        term = term/1;
        e = e + term;
    }

    printf("Aprox value of e: %f\n", e);
    return 0;
}
