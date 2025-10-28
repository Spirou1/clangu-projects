#include <stdio.h>

int main()
{
        int x = 0, value = 0;

        printf("Please enter the value of x: \n");
        scanf("%d", &x);


        value = (((((3 * x + 2) *  x - 5) *  x - 1) *  x + 7) *  x - 6);
        printf("The value of the polynomial is: %d\n", value);

return 0;
}

