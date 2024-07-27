#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;

    
    while (number > 0) {
        sum += number % 10; 
        number /= 10; 
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number > 0) {
        int result = sumOfDigits(number);
        printf("The sum of the digits is: %d\n", result);
    } else {
        printf("Please enter a valid positive integer.\n");
    }

    return 0;
}
