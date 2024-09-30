#include <stdio.h>
#include <gmp.h>

void factorial(int n, mpz_t result) {
    mpz_set_ui(result, 1);  // Initialize result to 1
    for (int i = 2; i <= n; i++) {
        mpz_mul_ui(result, result, i);  // result = result * i
    }
}

int main() {
    int n;
    mpz_t result;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    mpz_init(result);  // Initialize result as a GMP arbitrary precision integer
    factorial(n, result);

    printf("Factorial of %d is: ", n);
    mpz_out_str(stdout, 10, result);  // Print result in base 10
    printf("\n");

    mpz_clear(result);  // Clear the memory used by result
    return 0;
}