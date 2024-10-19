#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    for (int i=0; i<5; i++){
        scanf("%d\n", &a);
        if (a%3!=0){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}