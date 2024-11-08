#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, j;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            printf("(%d, %d) ", i, j);
            if ((i+j)%4==0){
                printf("\n");
            }
        }
        
    }
    return 0;
}