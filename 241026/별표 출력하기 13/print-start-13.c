#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=0; i<n*2; i++){
        if (i==0 || i == 2*n-1){
            for (int j = 0; j<n; j++){
                printf("* ");
            }
        } else if (i%2==1){
            printf("*");
        } else {
            for (int j = 0; j < n; j++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}