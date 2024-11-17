#include <stdio.h>
int func(int a);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    printf("%d",func(n));
    return 0;
}

int func(int n) {
    if (n == 0)
        return 0;
    
    int digit = n % 10;
    return digit * digit + func(n / 10);
}