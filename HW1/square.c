#include <stdio.h>

int main() {
    int x = 0, y = 0;
    int sumSquare = 0, squareSum = 0;
    scanf("%d,%d", &x, &y);
    for (int i = x; i < y + 1; i++) {
        sumSquare += i;
        squareSum += i * i;
    }
    int result = (sumSquare * sumSquare) - squareSum;
    printf("The difference between the sum of the squares: %d\n", result);
    return 0;
}
