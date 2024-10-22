#include <stdio.h>

int func(int a, int b) {
    int cnt = 0;

    for (int i = a; i <= b; i++) {

        if (i < 2) continue; // 2보다 작은 수는 소수가 아님

        int is_prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        // 자릿수 합 계산
        int sum = 0, num = i;
        while (num > 0) {
            sum += num % 10; // 자릿수를 더함
            num /= 10;       // 자릿수를 줄임
        }

        // 소수이면서 자릿수의 합이 짝수인 경우
        if (is_prime && sum % 2 == 0) {
            cnt++; // 카운트 증가
        }
    }
    printf("%d", cnt);
    return cnt;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    func(a, b);
    return 0;
}