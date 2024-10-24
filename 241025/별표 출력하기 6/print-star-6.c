#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // 앞에 공백 출력
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // 별 출력 (2*(n-i)-1 만큼)
        for (int j = 0; j < 2*(n-i)-1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--) {
        // 앞에 공백 출력
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // 별 출력 (2*(n-i)-1 만큼)
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}