#include <stdio.h>
void func1(int a);
void func2(int a);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    func1(n);
    func2(n);
    return 0;
}

void func1(int a){
    for (int i=1; i<=a; i++){
        printf("%d ", i);
    }
    printf("\n");
}

void func2(int a){
    for (int i=a; i>=1; i--){
        printf("%d ", i);
    }
    printf("\n");
}