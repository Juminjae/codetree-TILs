#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10], sum=0;
    for (int i=0; i<10; i++){
        scanf("%d ", &n[i]);
    }
    for (int i=0; i<10; i++){
        sum += n[i];
    }
    printf("%d", sum);

    return 0;
}