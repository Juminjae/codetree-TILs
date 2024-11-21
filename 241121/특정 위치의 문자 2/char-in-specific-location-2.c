#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char n[10];
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &n[i]); // " %c"로 공백 포함한 문자 입력 처리
    }
    printf("%c %c %c", n[1], n[4], n[7]); // 2번째, 5번째, 8번째 문자 출력
    
    
    return 0;
}