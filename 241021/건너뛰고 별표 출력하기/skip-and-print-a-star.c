#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            printf("*");
        }
    printf("\n\n");
    }
    for (int k=0; k<n; k++){
        for (int j=k; j<=n-2; j++){
            printf("*");
        }
    printf("\n\n");
    }
    return 0;
}