#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = 1;
        for (int j=a; j<=b; j++){
            sum *= j;
        }
        printf("%d\n", sum);
    }
    

    return 0;
}