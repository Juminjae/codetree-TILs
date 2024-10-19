#include <stdio.h>

void func(int a, int b);  // 소수의 합을 계산하는 함수의 프로토타입
int sum = 0;  // 전역 변수로 합계 초기화

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // 사용자로부터 a와 b를 입력받음
    func(a, b);  // 소수의 합 계산 함수 호출
    return 0;
}

void func(int Num1, int Num2) {
    for (int i = Num1; i <= Num2; i++) {
        if (i < 2) {
            continue;
        }
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }
        if (is_prime) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}