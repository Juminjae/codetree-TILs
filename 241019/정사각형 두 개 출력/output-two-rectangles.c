#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int k=0; k<n; k++){
        for (int i=0; i<n; i++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int k=0; k<n; k++){
        for (int i=0; i<n; i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}