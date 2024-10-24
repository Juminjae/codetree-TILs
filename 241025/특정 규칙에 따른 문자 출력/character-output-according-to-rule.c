#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for (int j=0; j<(n-1)-i; j++){
            printf("  ");
        }
        for (int k=0; k<i+1; k++){
            printf("@ ");
        }
        printf("\n");
    }
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            printf("@ ");
        }
        printf("\n");
    }

    return 0;
}