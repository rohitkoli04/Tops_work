#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time) {
    float amount, compoundInterest;

    // Calculate the amount using the formula: Amount = P(1 + R/100)^t
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest = Amount - Principal
    compoundInterest = amount - principal;

    return compoundInterest;
}

int main() {
    float principal, rate, compoundInterest;
    int time;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%d", &time);

    compoundInterest = calculateCompoundInterest(principal, rate, time);

    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
