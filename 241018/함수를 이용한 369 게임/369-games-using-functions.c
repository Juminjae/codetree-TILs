#include <stdio.h>

void func1(int a, int b);
int has369(int num);  // 각 자리에서 3, 6, 9를 확인하는 함수

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    func1(a, b);

    return 0;
}

// 각 자리에서 3, 6, 9가 있는지 확인하는 함수
int has369(int num) {
    while (num > 0) {
        int digit = num % 10;  // 일의 자리 숫자 추출
        if (digit == 3 || digit == 6 || digit == 9) {
            return 1;  // 3, 6, 9 중 하나가 있으면 true
        }
        num /= 10;  // 다음 자리로 이동
    }
    return 0;  // 3, 6, 9가 없으면 false
}

void func1(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        // 3의 배수이거나 숫자 내에 3, 6, 9가 포함되어 있는지 확인
        if (i % 3 == 0 || has369(i)) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
}