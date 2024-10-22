#include <stdio.h>
int func(int num1, int num2);

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    func(a,b);

    return 0;
}

int func(int num1, int num2){
    int cnt=0;
    for (int i=num1; i<=num2; i++){
        if (i%2==0 || i % 10 == 5 || (i%3==0 && i%9!=0)){
            continue;
        } else{
            cnt++;
        }
    }
    printf("%d", cnt);
    return cnt;
}