#include <stdio.h>
void func(int year);

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    scanf("%d", &y);
    func(y);
    return 0;
}

void func(int n){
    if (n%4==0){
        printf("true");
    } else if (n%100==0 && n%400!=0){
        printf("false");
    }
}