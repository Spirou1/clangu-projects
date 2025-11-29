#include <stdio.h>

int main() {


    int hours, minutes, total_minutes;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    total_minutes = (hours * 60) + minutes;
    printf("Total minutes: %d\n", total_minutes);

    if (total_minutes <= 480) {
        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
    }
    else if (total_minutes > 480 && total_minutes <= 583) {
        printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
    }
    else if (total_minutes > 583 && total_minutes <= 679) {
        printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
    }
    else if (total_minutes > 679 && total_minutes <= 767) {
        printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m\n");
    }
    else if (total_minutes > 767 && total_minutes <= 840) {
        printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m\n");
    }
    else if (total_minutes > 840 && total_minutes <= 945) {
        printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
    }
    else if (total_minutes > 945 && total_minutes <= 1140) {
        printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
    }
    else if (total_minutes > 1140) {
        printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");
    }

    return 0;
}
