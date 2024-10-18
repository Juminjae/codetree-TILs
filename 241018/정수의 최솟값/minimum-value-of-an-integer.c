#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

     if (a <= b && a <= c) {
        printf("%d\n", a);  // a가 가장 작은 경우
    }
    else if (b <= a && b <= c) {
        printf("%d\n", b);  // b가 가장 작은 경우
    }
    else {
        printf("%d\n", c);  // c가 가장 작은 경우
    }

    return 0;
}