#include <stdio.h>

int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    for (int i = 0; i < 26; i++) {
        // Print lowercase letter
        putchar(lowercase);

        // Print uppercase letter
        putchar(uppercase);

        // Increment letters
        lowercase++;
        uppercase++;
    }

    // Print a newline character
    putchar('\n');

    return 0;
}

