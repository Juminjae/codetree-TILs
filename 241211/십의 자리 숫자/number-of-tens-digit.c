#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], cnt[9]={0};
    for (int i=0; i<100; i++){
        scanf("%d ", &arr[i]);
        if (arr[i]/=10){
            cnt[arr[i]]++;
        }
    }

    for (int i=1; i<10; i++){
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}