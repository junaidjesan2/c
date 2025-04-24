#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int freq[m + 1]; // Frequency array, size m+1 to store counts for 1..M

    // Initialize frequency array with 0
    for (int i = 0; i <= m; i++) {
        freq[i] = 0;
    }

    // Read inputs and count frequencies
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        freq[num]++;
    }

    // Print frequencies for 1 to M
    for (int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}
