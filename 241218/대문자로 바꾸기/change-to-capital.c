#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][3], i, j;
    for (i=0; i<5; i++){
        for (j=0; j<3; j++){
            scanf("%c ", &arr[i][j]);
            if (arr[i][j] >= 'a' && arr[i][j] <= 'z') {
                arr[i][j] = arr[i][j] - ('a' - 'A');
            }
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}