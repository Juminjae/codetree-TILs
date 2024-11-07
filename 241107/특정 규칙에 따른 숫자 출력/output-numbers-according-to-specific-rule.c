#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=1;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for (int j = 0; j < 2*i; j++) {
            printf(" ");
        }
        for (int j=0; j<n-i; j++){
            printf("%d ", cnt);
            cnt++;
            if (cnt > 9){
                cnt=1;
            }
        }
        printf("\n");
    }
    return 0;
}