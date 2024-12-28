#include <stdio.h>

int sequence(int n) {
    // 기본 조건
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }
    // ⌊ 3 / N ⌋ 값을 최소 1로 보정하여 계산
    int index = 3 / n;
    if (index < 1) {
        index = 1;
    }
    return sequence(index) + sequence(n - 1);
}

int main() {
    int N;
    // 사용자 입력
    scanf("%d", &N);
    // 결과 출력
    printf("%d\n", sequence(N));
    return 0;
}