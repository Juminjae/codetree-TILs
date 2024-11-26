#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n=0;

    // 정수 입력받기
    while (1) {
        scanf("%d", &arr[n]);
        if (arr[n] == 0) { // 0이 입력되면 종료
            break;
        }
        n++;
    }
    // 입력받은 정수 처리 및 출력
    for (int j = 0; j < n; j++) {
        if (arr[j] % 2 == 1) {
            // 홀수인 경우
            printf("%d ", arr[j] + 3);
        } else {
            // 짝수인 경우
            printf("%d ", arr[j] / 2);
        }
    }
    return 0;
}