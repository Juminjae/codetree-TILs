#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    if (n%2==0 && (n/10+n%10)%5==0){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}