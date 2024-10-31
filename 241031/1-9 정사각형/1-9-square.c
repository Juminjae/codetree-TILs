#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cnt++;
            printf("%d", cnt);
            if (cnt >= 9){
                cnt++;
                cnt=0;
                
            }
        }
        printf("\n");
    }
    return 0;
}