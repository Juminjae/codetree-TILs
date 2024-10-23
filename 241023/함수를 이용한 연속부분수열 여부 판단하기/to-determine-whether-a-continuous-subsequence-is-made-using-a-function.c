#include <stdio.h>

int func(int A[], int n1, int B[], int n2) {
    
    for (int i = 0; i <= n1 - n2; i++) {
        int j;
        for (j = 0; j < n2; j++) {
            if (A[i + j] != B[j]) {
                break;
            }
        }
        // B의 모든 원소가 A의 연속된 부분에 일치한 경우
        if (j == n2) {
            return 1; // 연속 부분 수열
        }
    }
    return 0; // 연속 부분 수열 아님
}

int main() {
    int n1, n2;

    // 수열 A와 B의 원소 개수 입력받기
    scanf("%d %d", &n1, &n2);

    int A[n1], B[n2];

    // 수열 A 입력받기
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    // 수열 B 입력받기
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    // 연속 부분 수열 판단
    if (func(A, n1, B, n2)) {
        printf("Yes\n"); // 연속 부분 수열
    } else {
        printf("No\n"); // 연속 부분 수열 아님
    }

    return 0;
}