#include <stdio.h>

int main() {
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
        printf("\n");  // 줄바꿈
    }
    
    return 0;
}