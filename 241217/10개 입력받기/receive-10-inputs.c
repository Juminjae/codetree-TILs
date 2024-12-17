#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt=0, sum=0;
    double avg;
    for (int i=0; i<10; i++){
        scanf("%d ", &arr[i]);
        if (arr[i]==0){
            break;
        }
        sum += arr[i];
        cnt++;
    }
    avg = cnt > 0 ? (double)sum / cnt : 0.0;
    printf("%d %.1f\n", sum, avg);

    return 0;
}