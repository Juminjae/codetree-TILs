#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, count[100]={0}, cnt;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d ", &cnt);
        count[cnt]++;
    }

    for (int i=1; i<=9; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}