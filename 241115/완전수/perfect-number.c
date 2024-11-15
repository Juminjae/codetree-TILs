#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, cnt=0;
    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++) {  // n으로 각 숫자를 순회
        int sum = 0;

        for (int i = 1; i <= n / 2; i++) {  // n의 진약수를 구함
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {  // 진약수의 합이 자기 자신과 같다면 완전수
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}