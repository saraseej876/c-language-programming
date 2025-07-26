#include <stdio.h>

// Function to print 7-bit binary of a character without spaces/newlines
void printBinary7(unsigned char ch) {
    for (int i = 6; i >= 0; i--) {
        printf("%d", (ch >> i) & 1);
    }
}

int main() {
    char str[1000];

    printf("Enter a word or sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("\nBinary Pattern: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') continue; // skip newline
        printBinary7(str[i]);
    }

    printf("\n");
    return 0;
}
