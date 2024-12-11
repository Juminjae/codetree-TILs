#include <stdio.h>

int main() {
    char symptom;
    int temp;
    int cnt[4] = {0};  // 0: A 진료소, 1: B 진료소, 2: C 진료소, 3: D 진료소

    // 3명에 대해 검사 진행
    for (int i = 0; i < 3; i++) {
        scanf(" %c %d", &symptom, &temp);  // 공백을 처리하기 위한 " %c"
        
        // 조건에 맞는 진료소 분류
        if (symptom == 'Y' && temp >= 37) {
            cnt[0]++;  // A 진료소
        } else if (symptom == 'N' && temp >= 37) {
            cnt[1]++;  // B 진료소
        } else if (symptom == 'Y' && temp < 37) {
            cnt[2]++;  // C 진료소
        } else {
            cnt[3]++;  // D 진료소
        }
    }

    // 각 진료소로 가는 인원 출력
    printf("%d %d %d %d", cnt[0], cnt[1], cnt[2], cnt[3]);

    // 위급상황 E 출력 여부
    if (cnt[0] >= 2) {
        printf(" E");
    }
    
    printf("\n");  // 출력 끝에 줄 바꿈 추가
    return 0;
}
