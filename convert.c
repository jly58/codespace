#include <stdio.h>

int main () {
    float days;
    float weeks;
    printf("How many days would you like to convert?\n");
    scanf("%f", &days);
    weeks = days / 7;
    printf("%5.1f days is %5.2f weeks\n", days, weeks);
    return 0;




}