#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < 2 * N - 1; i++) {
        if (i <= N - 1) {
            for (int ii = i; ii >= 0; ii--) {
                printf("*");
            }
            printf("\n");
        } else if (i > N - 1) {
            for (int ii = 2 * N - 1 - i; ii > 0; ii--) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}