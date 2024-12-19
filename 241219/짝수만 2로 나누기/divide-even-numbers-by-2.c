#include <stdio.h>

void func(int arr[], int n){
    for (int i=0; i<n; i++){
        if (arr[i]%2==0){
            arr[i] /= 2;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    func(arr, n);

    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}