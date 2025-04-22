#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[100000]; // assuming max n = 1e5

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int isPalindrome = 1; // assume true

    for (int i = 0; i < n / 2; i++) {
        if (A[i] != A[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
