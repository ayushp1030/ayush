#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the values of x and y: ");
    scanf("%d %d", &x, &y);

    // Evaluating (x + y)^3
    int result = (x + y) * (x + y) * (x + y);

    printf("(%d + %d)^3 = %d\n", x, y, result);

    
}
