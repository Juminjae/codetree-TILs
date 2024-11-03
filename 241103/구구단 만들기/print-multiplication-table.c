#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    for (int j = 1; j <= 9; j++) {
        for (int i = b; i >= a; i -= 2) { 
            printf("%d * %d = %d", i, j, i * j);
            if (i > a) {
                printf(" / ");
            }
        }
        printf("\n"); // 한 줄 끝나면 줄바꿈
    }
    return 0;
}