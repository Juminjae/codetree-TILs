#include <stdio.h>

// 팩토리얼을 계산하는 재귀 함수
int factorial(int n) {
    if (n == 0 || n == 1) { // 종료 조건
        return 1;
    }
    return n * factorial(n - 1); // 재귀 호출
}

int main() {
    int n;
    scanf("%d", &n);

    // 팩토리얼 계산 및 출력
    printf("%d\n", factorial(n));

    return 0;
}
