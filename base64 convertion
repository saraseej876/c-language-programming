#include <stdio.h>
#include <string.h>

// Base64 character set
char base64_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

// Function to encode a block of 3 bytes to 4 base64 characters
void base64_encode(const unsigned char *input, int len) {
    int i = 0;
    unsigned char a3[3];
    unsigned char a4[4];

    while (len--) {
        a3[i++] = *(input++);
        if (i == 3) {
            a4[0] = (a3[0] & 0xfc) >> 2;
            a4[1] = ((a3[0] & 0x03) << 4) + ((a3[1] & 0xf0) >> 4);
            a4[2] = ((a3[1] & 0x0f) << 2) + ((a3[2] & 0xc0) >> 6);
            a4[3] = a3[2] & 0x3f;

            for (i = 0; i < 4; i++)
                putchar(base64_chars[a4[i]]);
            i = 0;
        }
    }

    // Padding for remaining bytes
    if (i) {
        for (int j = i; j < 3; j++)
            a3[j] = '\0';

        a4[0] = (a3[0] & 0xfc) >> 2;
        a4[1] = ((a3[0] & 0x03) << 4) + ((a3[1] & 0xf0) >> 4);
        a4[2] = ((a3[1] & 0x0f) << 2) + ((a3[2] & 0xc0) >> 6);
        a4[3] = a3[2] & 0x3f;

        for (int j = 0; j < i + 1; j++)
            putchar(base64_chars[a4[j]]);

        while (i++ < 3)
            putchar('=');
    }
}

int main() {
    char input[1000];

    printf("Enter your text: ");
    fgets(input, sizeof(input), stdin);

    printf("Base64 Output: ");
    base64_encode((unsigned char*)input, strlen(input) - 1); // remove newline
    printf("\n");

    return 0;
}
