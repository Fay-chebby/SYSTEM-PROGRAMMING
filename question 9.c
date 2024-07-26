#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int number) {
    int sum = 0;

    // Iterate through each digit of the number
    while (number > 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }

    return sum;
}

int main() {
    int number;

    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Ensure the input is a positive integer
    if (number > 0) {
        int result = sumOfDigits(number);
        printf("The sum of the digits is: %d\n", result);
    } else {
        printf("Please enter a valid positive integer.\n");
    }

    return 0;
}
