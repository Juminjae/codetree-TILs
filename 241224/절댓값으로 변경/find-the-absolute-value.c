#include <stdio.h>

void applyAbsoluteValues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    applyAbsoluteValues(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
