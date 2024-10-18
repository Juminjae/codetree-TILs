#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    scanf("%d", &n);

    while (n!=1){
        if (n%2==0){
            n = n/2;
        }
        else {
            n = 3*n+1;
        }
        cnt++;
    }
    printf("%d", cnt);
    
    return 0;
}