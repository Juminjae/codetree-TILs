#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10], sum=0,sum_1=0, count=0;
    float avg=0;
    for (int i=0; i<10; i++){
        scanf("%d", &n[i]);

        if (n[i]%2==0){
            sum_1 += n[i];
        }
        if (n[i]%3==0){
            sum += n[i];
            count++;
            avg = sum/count;
        }
        
    }
    printf("%d %.1f",sum_1, avg);
    return 0;
}