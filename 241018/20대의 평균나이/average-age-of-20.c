#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age, sum=0, count=0;
    float avg;
    while (1) {
        scanf("%d", &age);
        if (age >= 20 && age <= 29) {
            sum += age;
            count++;
        } else {
            break;
        }
        avg = (float)sum / count;
    }
    printf("%.2f", avg);
    return 0;
}