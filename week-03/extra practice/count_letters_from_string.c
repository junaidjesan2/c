#include <stdio.h>
#include <string.h>

int main() {
    char S[10000001];
    int count[26] = {0};

    // Take string input
    scanf("%s", S);

    // Print the string immediately after input
    printf("Input string: %s\n", S);

    // Count frequency of each character
    for (int i = 0; S[i] != '\0'; i++) {
        count[S[i] - 'a']++;
    }

    // Print frequencies
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
