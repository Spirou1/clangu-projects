#include <stdio.h>

int main()
{
    
    int hours = 0;
    int minutes = 0;

    printf("Enter a 24-hour time: ");

    if (scanf("%2d:%2d", &hours, &minutes) != 2) {
        printf("Enter a valid time\n");
        return 1;
    }

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Enter a valid time\n");
        return 1;
    }


        if (hours == 0) {
            printf("Equivalent 12 hour time: 12:%d AM\n", minutes);
        } else if (hours < 12) {
            printf("Equivalent 12 hour time: %d:%d AM\n", hours, minutes);
        } else if (hours == 12) {
            printf("Equivalent 12 hour time: 12:%d PM\n", minutes);
        } else {
            printf("Equivalent 12 hour time: %d:%d PM\n", hours - 12, minutes);
        }
    return 0;
}
