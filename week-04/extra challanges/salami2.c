#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int salami[N];
    int max = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &salami[i]);
        if (salami[i] > max) {
            max = salami[i];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", max - salami[i]);
    }

    return 0;
}
