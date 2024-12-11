#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i=0, n, arr[100], cnt[10]={0};
    while (1){
        scanf("%d ", &n);
        if (n == 0){
            break;
        }
        if (n >= 10) {
            cnt[n / 10]++;
        }
        arr[i++] = n;
    }
    for (int i = 10; i >= 1; i--) {
        printf("%d0 - %d\n", i, cnt[i]);
    }

    return 0;
}