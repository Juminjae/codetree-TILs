#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], cnt[9]={0};
    int i = 0, num;

    // 입력 처리
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num >= 10) {
            cnt[num / 10]++;
        }
        arr[i++] = num;
    }
    for (int i = 1; i <= 9; i++) {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}