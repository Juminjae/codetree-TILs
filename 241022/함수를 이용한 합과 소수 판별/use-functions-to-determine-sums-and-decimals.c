#include <stdio.h>
int func(int num1, int num2);

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d", &a, &b);
    func(a,b);

    return 0;
}

int func(int a, int b){
    int cnt=0;
    for (int i=a; i<=b; i++){
        int sum=0, num=i;

        while (num > 0){
            sum += num % 10;
            num /= 10;
        }
        if (i%2==1 && sum%2==0){
            cnt++;
        }
    }
    printf("%d", cnt);
    return cnt;
}