#include <stdio.h>

int main() {
    double tolerance, sum = 1.0; 
    double term = 1.0; 
    
    printf("Enter tolerance value (e.g., 0.000001): ");
    scanf("%lf", &tolerance);

    for (int i = 1; term > tolerance; i++) {
        term = term / i; 
        sum += term;
    }
    
    printf("Aprox value of e: %.8lf\n", sum); 

    return 0;
}
