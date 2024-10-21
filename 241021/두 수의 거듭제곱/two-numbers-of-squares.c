#include <stdio.h>
void func(int num1, int num2);

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    func(a,b);

    return 0;
}

void func(int a, int b){
    int total=1;
    for (int i=0; i<b; i++){
        total *= a;
    }
    printf("%d", total);
}