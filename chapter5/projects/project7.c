#include <stdio.h>

int main() {

    int n1, n2, n3, n4;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        int smallest = n1, largest = n1;

        if (n2 > largest) { 
            largest = n2;
        }
        if (n3 > largest) {
            largest = n3;
        }
        if (n4 > largest) {
            largest = n4;
        }


        if (n2 < smallest) {
            smallest = n2;
        }
        if (n3 < smallest) {
            smallest = n3;
        }
        if (n4 < smallest) {
            smallest = n4;
        }


    printf("Largest number is %d\n", largest);
    printf("Smallest number %d\n", smallest);

    return 0;
}
