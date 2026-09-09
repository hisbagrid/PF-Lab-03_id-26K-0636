#include <stdio.h>

int main() {
    float km;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    float meters = km * 1000;
    float centimeters = meters * 100;

    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in centimeters: %.2f\n", centimeters);

    return 0;
}
