#include <stdio.h>
int func(int a, int b);

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    scanf("%d %d", &m, &d);

    if (func(m, d)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}

int func(int a, int b){
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 31, 31, 31, 31, 31, 31};
    
    if (a < 1 || a > 12) {
        return 0;
    }
    if (b < 1 || b > daysInMonth[a]) {
        return 0;
    }
    return 1;
}