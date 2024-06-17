#include <stdio.h>

int main() {
    float monthlySalary, insurancePremium, remainingSalary, loanInstallment;

    // Accept monthly salary from the user
    printf("Enter monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium (10%)
    insurancePremium = 0.1 * monthlySalary;

    // Deduct insurance premium
    remainingSalary = monthlySalary - insurancePremium;

    // Calculate loan installment (10% of remaining salary)
    loanInstallment = 0.1 * remainingSalary;

    // Deduct loan installment
    remainingSalary -= loanInstallment;

    // Display results
    printf("Monthly salary after insurance premium deduction: %.2f\n", remainingSalary);
    printf("Insurance premium: %.2f\n", insurancePremium);
    printf("Loan installment: %.2f\n", loanInstallment);

    return 0;
}
