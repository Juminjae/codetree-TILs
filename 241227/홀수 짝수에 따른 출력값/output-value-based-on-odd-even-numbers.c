#include <stdio.h>

int func(int n) {
    if (n <= 0) {
        return 0;
    }    
    if (n % 2 == 1) {
        return n + func(n - 2);
    }
    return func(n - 1);
}

int func2(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + func2(n - 2);
    }
    return func2(n - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 1) {
        printf("%d\n", func(N));
    } else {
        printf("%d\n", func2(N));
    }
    return 0;
}
