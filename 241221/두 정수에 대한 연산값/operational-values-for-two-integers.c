#include <stdio.h>

void func(int *a, int *b);

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    func(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void func(int *a, int *b){
    if (*a > *b) {
        *a += 25;
        *b *= 2;
    } else {
        *b += 25;
        *a *= 2;
    }
}