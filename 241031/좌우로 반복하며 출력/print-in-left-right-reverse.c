#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        if (i%2==1){
            for (int j=1; j<=n; j++){
                printf("%d", j);
            }
        } else {
            for (int j=0; j<n; j++){
                printf("%d", n-j);
            }
        }
        printf("\n");
    }
    return 0;
}