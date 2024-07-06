#include <stdio.h>
#include <string.h>

void hex_to_string(const char *hex_input, char *output) {
    while (*hex_input && hex_input[1]) {
        sscanf(hex_input, "%2hhx", output);
        hex_input += 2;
        output++;
    }
    *output = '\0';
}

int main() {
    const char *hex_message = "50617373776F72642069732064656573";
    char str_output[256] = {0};
    hex_to_string(hex_message, str_output);
    printf("String: %s\n", str_output);
    return 0;
}
