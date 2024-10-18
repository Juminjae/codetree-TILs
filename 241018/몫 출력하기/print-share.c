#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, count = 0;  // count는 짝수를 처리한 횟수

    while (count < 3) {  // 짝수를 3번 처리할 때까지 반복
        scanf("%d", &n);  // 숫자를 입력받음

        if (n % 2 == 0) {  // 짝수인 경우
            n /= 2;  // 2로 나눈 몫을 구함
            printf("%d\n", n);  // 결과 출력
            count++;  // 짝수 처리 횟수 증가
        }
    }
    return 0;
}