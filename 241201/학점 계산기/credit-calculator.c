#include <stdio.h>

int main() {
    int n; // 과목 수
    double grades[5]; // 최대 과목 수가 5이므로 배열 크기는 5
    double sum = 0.0; // 학점 합계
    double average; // 평균 학점

    // 입력받기
    scanf("%d", &n); // 과목 수 입력
    for (int i = 0; i < n; i++) {
        scanf("%lf", &grades[i]); // 각 과목 학점 입력
        sum += grades[i]; // 합계에 추가
    }

    // 평균 계산
    average = sum / n;

    // 평균 출력 (소수 첫째 자리 반올림)
    printf("%.1lf\n", average);

    // 등급 출력
    if (average >= 4.0) {
        printf("Perfect\n");
    } else if (average >= 3.0) {
        printf("Good\n");
    } else {
        printf("Poor\n");
    }

    return 0;
}
