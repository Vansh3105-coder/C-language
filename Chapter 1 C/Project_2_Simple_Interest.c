#include <stdio.h>
#include <math.h> // pow() function use karne ke liye math.h library zaroori hai

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, total_amount;

    // Taking inputs from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // 1. Simple Interest Calculation
    // Formula: (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100;

    // 2. Compound Interest Calculation
    // Formula: Total Amount (A) = P * (1 + R/100)^T
    // Compound Interest (CI) = A - P
    total_amount = principal * pow((1 + rate / 100), time);
    compound_interest = total_amount - principal;

    // Printing the results
    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}