#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10], cnt[7] = {0};
    for (int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        cnt[arr[i]]++;
    }
    for (int i=1; i<=6; i++){
        printf("%d - %d\n", i, cnt[i]);  
    }
    return 0;
}