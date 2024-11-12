#include <stdio.h>
void func(int n);
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}

void func(int n){
    for (int i=0; i<n; i++){
        printf("HelloWorld\n");
    }
}