#include <stdio.h>
void func1(int a);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    func1(n);

    return 0;
}

void func1(int n) {
    static int cnt = 0; // 작업 횟수 누적을 위한 static 변수

    if (n == 1) {
        printf("%d\n", cnt);
        return;
    }
    if (n % 2 == 0) {
        n /= 2;
    } else {
        n /= 3;
    }
    cnt++;
    func1(n); 
}
