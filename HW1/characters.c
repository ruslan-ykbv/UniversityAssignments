#include <stdio.h>

int main() {
    char first = 0, ch = 0, a = 0, b = 0;

    // Read the first character
    if (scanf("%c", &first) != 1) return 1;

    // Validate the first character
    if (first < 'a' || first > 'z') {
        printf("Error!!\n");
        return 1;
    }

    // Calculate previous and next, if a then comeback to z and if z then a
    char prev, next;

    if (first == 'a') {
        prev = 'z';
    } else {
        prev = first - 1;
    }

    if (first == 'z') {
        next = 'A';
    } else {
        next = first + 1 - 32; // To Capital
    }

    // Read the rest of the input
    while (scanf("%c", &ch) != EOF) {
        // Skip spaces or newline characters
        if (ch == ' ' || ch == '\n') {
            continue;
        }

        // Validate each character
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            printf("Error!!\n");
            return 1;
        }

        if (ch == prev) {
            a++;
        } else if (ch == next) {
            b++;
        }
    }
    printf("%c: %d\n", prev, a);
    printf("%c: %d\n", next, b);

    return 0;
}
