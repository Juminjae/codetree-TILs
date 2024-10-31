#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cnt+=2;
            printf("%d ", cnt);
            if (cnt >= 8){
                cnt = 0;
            }
        }
        printf("\n");
    }
    return 0;
}