#include <stdio.h>
void func1(int a, int b);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    func1(n, n);
    return 0;
}

void func1(int n, int b){
    if (n <= 0) {
        return;
    }

    // for 문 사용하여 별 출력
    for (int j=0; j<n; j++) {
        printf("* ");
    }
    printf("\n");

    func1(n - 1, b);
     if (n <= b) {
        for (int j = 1; j <=n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}