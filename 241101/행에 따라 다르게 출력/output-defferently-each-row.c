#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i%2==1){
                k+=1;
            } else {
                k+=2;
            }
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}