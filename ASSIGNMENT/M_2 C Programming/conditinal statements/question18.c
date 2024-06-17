// 30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
// minimum bill should be of Rs. 256/-
#include <stdio.h>

int main() {
    int customer_id, units;
    char customer_name[50];
    float charge_per_unit, total_amount, surcharge = 0;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter customer name: ");
    scanf("%s", customer_name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate charge per unit based on units consumed
    if (units <= 350) {
        charge_per_unit = 1.20;
    } else if (units < 600) {
        charge_per_unit = 1.50;
    } else if (units < 800) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.0;
    }

    // Calculate total amount without surcharge
    total_amount = units * charge_per_unit;

    // Apply surcharge if total amount exceeds Rs. 800
    if (total_amount > 800) {
        surcharge = total_amount * 0.18; // 18% surcharge
        total_amount += surcharge;
    }

    // Ensure minimum bill of Rs. 256
    if (total_amount < 256) {
        total_amount = 256;
    }

    // Display bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: Rs. %.2f\n", charge_per_unit);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total Amount to be Paid: Rs. %.2f\n", total_amount);

    return 0;
}
