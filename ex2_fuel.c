// Name: MANDRE DERRICK AJAX
// Student Number: 25/U/BIO/01391/PD


#include <stdio.h>

int main(){
    float distance_travelled, fuel_used, fuel_efficiency;

    printf("Enter distance(km): ");
    scanf("%f", &distance_travelled);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_used);

    fuel_efficiency = distance_travelled / fuel_used;
    printf("\nFuel efficiency: %.2f km/l", fuel_efficiency);
    return 0;
}