#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float n[10], sum=0.0;
    for (int i=0; i<8; i++){
        scanf("%f ", &n[i]);
        sum += n[i];
    }
    float avg = sum / 8;
    printf("%.1f", avg);

    return 0;
}