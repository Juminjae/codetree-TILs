#include <stdio.h>
void star(int a);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    star(n);
    return 0;
}

void star(int a){
    for (int i=1; i<=5; i++){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}