#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10], total, sum1, sum2;
    for (int i=0; i<10; i++){
        scanf("%d", &n[i]);
        sum1 = n[0]+n[2]+n[4]+n[6]+n[8];
        sum2 = n[1]+n[3]+n[5]+n[7]+n[9];

        if (sum1>sum2){
            total = sum1-sum2;
        } else{
            total = sum2-sum1;
        }
    }
    printf("%d", total);

    return 0;
}