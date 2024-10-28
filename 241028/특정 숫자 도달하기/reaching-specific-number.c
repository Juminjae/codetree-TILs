#include <stdio.h>

int main() {
    int n[10];
    int sum = 0, count = 0;
    double avr;

    // 10개의 정수를 입력 받음
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);

        if (n[i] >= 250) {
            break;
        }
        sum += n[i];
        count++;
    }
    avr = (double)sum / count;
    printf("%d %.1f\n", sum, avr);
    return 0;
}