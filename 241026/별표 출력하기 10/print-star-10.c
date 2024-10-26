#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for (int i=0; i<n*2; i++){
        if (i%2==1) {
            for (int j=0; j<n-(i-1)/2; j++){
                printf("* ");
            }
        }
        if (i%2==0) {
            for (int j=0; j<1+i/2; j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}