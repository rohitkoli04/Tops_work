#include <stdio.h>

float calculateInsurancePremium(float salary) {
    float premium;

    if (salary < 5000) {
        premium = 0.02 * salary;
    } else if (salary >= 5000 && salary < 10000) {
        premium = 0.04 * salary;
    } else {
        premium = 0.06 * salary;
    }

    return premium;
}

int main() {
    float salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);


    float premium = calculateInsurancePremium(salary);

  
    printf("Your insurance premium is: $%.2f\n", premium);

    return 0;
}
