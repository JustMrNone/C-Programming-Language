#include <stdio.h>

int main()
{
    long long num = 1;   // Initialize to 1 for factorial calculation
    long long number;
    
    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lli", &number);  // Use %lli for long long int
    
    // Calculate factorial
    for (int i = 1; i <= number; i++)
    {
        num = num * i;
    }
    
    // Output the result
    printf("Factorial of %lli is %lli\n", number, num);  // Use %lli for long long int
    
    return 0;
}
