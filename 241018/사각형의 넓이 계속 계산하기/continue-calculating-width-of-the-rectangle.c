#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, width;
    char c;
    while (1){
        scanf("%d %d %c", &a, &b, &c);
        width=a*b;
        printf("%d\n", width);

        if (c == 'C'){
            break;
        }
    }
    return 0;
}