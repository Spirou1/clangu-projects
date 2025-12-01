#include <stdio.h>

int main()
{
    
    int days_number, starting_day;
    int days_counter = 1;

    printf("Enter number of days in month: ");
    scanf("%d", &days_number);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);
    

    for (int i = 1; i <= days_number + starting_day - 1; i++) {

        if (i < starting_day) {
            printf("   ");
        }

        else { 
            printf("%3d", days_counter++);
        }

        if (i % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
