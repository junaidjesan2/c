#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    // Read input
    scanf("%d", &number);

    // Check if it's a five-digit number
    if (number >= 10000 && number <= 99999) {
        // Extract digits and sum
        while (number > 0) {
            sum += number % 10;
            number = number / 10;
        }
        
        // Output result
        printf("%d", sum);
    }

    return 0;
}
