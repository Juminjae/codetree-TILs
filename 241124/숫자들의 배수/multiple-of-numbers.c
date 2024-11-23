#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100], count=0;
    scanf("%d", &n);
    arr[0]=n;

    for (int i=1; i<=100; i++){
        arr[i]=n*i;
        printf("%d ", arr[i]);

        if (arr[i] % 5 == 0) {
            count++;
            if (count == 2) { 
                break;
            }
        }
    }
    return 0;
}