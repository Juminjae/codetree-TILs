#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            printf("C");
            return 0;
        }
    }
    if (n<2){
        printf("C");
    }
    printf("P");
    return 0;
}