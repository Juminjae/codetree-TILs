#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100];
    scanf("%d", &n);
    arr[1]=n;
    arr[0]=1;
    printf("%d %d ", arr[0], arr[1]);

    for (int i=2; i<20; i++){
        arr[i]= arr[i-2]+arr[i-1];
        printf("%d ", arr[i]);
        if (arr[i]>100){
            break;
        }
    }

    return 0;
}