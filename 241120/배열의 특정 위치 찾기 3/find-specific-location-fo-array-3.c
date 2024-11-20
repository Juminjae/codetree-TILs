#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int sum = 0;

    while (1) {
        scanf("%d", &arr[count]);
        if (arr[count] == 0) break; // 0을 만나면 입력 종료
        count++;
    }

    if (count >= 3) {
        sum = arr[count - 3] + arr[count - 2] + arr[count - 1];
    } else {
        sum = 0; // 0 이전에 숫자가 3개 미만일 경우 0 출력
    }
    printf("%d\n", sum); // 결과 출력
    return 0;
}
