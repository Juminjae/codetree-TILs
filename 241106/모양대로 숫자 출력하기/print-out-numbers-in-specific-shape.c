#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {  // 행 수는 n
        for (int j = 0; j < i; j++) {  // 앞부분 공백 출력
            printf("  ");
        }
        for (int j = n - i; j > 0; j--) {  // 숫자 출력 (감소)
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}