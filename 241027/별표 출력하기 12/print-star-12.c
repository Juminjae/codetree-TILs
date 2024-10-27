#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i % 2 == 0 || (j % 2 == 0 && i < n - 2)) {
                printf("* ");
            } else {
                printf("  ");  // 홀수 위치에는 공백
            }
        }
        printf("\n");
    }
    return 0;
}