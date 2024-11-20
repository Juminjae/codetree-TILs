#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    int sum=0;
    for (int i=0; i<10; i++){
        scanf("%d", &n[i]);
        sum = n[2]+n[4]+n[9];
    }
    printf("%d", sum);

    return 0;
}