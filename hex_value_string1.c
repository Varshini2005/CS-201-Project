#include <stdio.h>
#include <string.h>

void string_to_hex(const char *input, char *output) {
    while (*input) {
        sprintf(output, "%02x", (unsigned char)*input);
        input++;
        output += 2;
    }
}

int main() {
    const char *message = "I owe you $2000.";
    char hex_output[256] = {0};
    string_to_hex(message, hex_output);
    printf("Hexadecimal: %s\n", hex_output);
    return 0;
}
