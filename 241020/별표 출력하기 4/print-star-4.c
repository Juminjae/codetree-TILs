#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=n; j>i-1; j--){
            printf("* ");
        }
        printf("\n");
    }
    for (int k=1; k<=n+1; k++){
        for (int j=1; j<k-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}