#include <stdio.h>

void to_lower(char message[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = message[i] + 32;
        }
    }
}

int main() {
    // all the characters are in upper case
    char message1[] = "LOVE";
    to_lower(message1);
    puts(message1);

    // all the characters are in lower case
    char message2[] = "care";
    to_lower(message2);
    puts(message2);

    // a mix of upper and lower case characters
    char message3[] = "UC San Diego";
    to_lower(message3);
    puts(message3);

    // A mix of upper case characters and numbers
    char message4[] = "CSE29";
    to_lower(message4);
    puts(message4);
    
    return 0;
}

