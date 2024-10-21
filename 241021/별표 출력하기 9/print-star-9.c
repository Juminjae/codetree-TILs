#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

     for (int i = 0; i < n; i++) {
        // 앞에 공백 출력 (n-i-1만큼 공백 추가)
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        // 별 출력 (2*i+1 만큼)
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}