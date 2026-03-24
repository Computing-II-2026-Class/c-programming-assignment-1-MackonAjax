// MANDRE DERRICK AJAX
// 25/U/BIO/01391/PD

#include <stdio.h>


int main(){
    float units_consumed, cost_per_unit, total_electricity_bill;

    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_electricity_bill = units_consumed * cost_per_unit;
    printf("\nTotal bill: %.2f UGX\n", total_electricity_bill);
    return 0;
}