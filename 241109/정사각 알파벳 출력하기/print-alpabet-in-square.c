#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    char cnt = 'A';
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            printf("%c", cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}