#include <stdio.h>
void func1(int a);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    func1(n);
    return 0;
}

void func1(int n){
    if (n==0){
        return;
    }
    printf("%d ", n);
    func1(n-1);
    printf("%d ", n);
}