#include <stdio.h>

int main() {
    // Declare variables
    int x, y;
    int result;

    // Input values of x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calculate (x - y)^2
    result = (x - y) * (x - y);

    // Output the result
    printf("The result of (%d - %d)^2 is: %d\n", x, y, result);

    
}
