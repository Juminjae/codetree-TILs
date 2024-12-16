#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt=0;
    for (int i=0; i<10; i++){
        scanf("%d", &arr[i]);

        if (arr[i] == 0){
            break;
        }
        cnt++;
    }
    for (int i=cnt-1; i>=0; i--){
        printf("%d", arr[i]);
        if (i > 0){
            printf(" ");
        }
    }
    return 0;
}