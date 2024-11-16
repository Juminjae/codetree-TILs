#include <stdio.h>
void func(int n);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}

void func(int a){
    int sum=0;
    for (int i=1; i<=a; i++){
        sum += i;
    }
    printf("%d",sum);
}