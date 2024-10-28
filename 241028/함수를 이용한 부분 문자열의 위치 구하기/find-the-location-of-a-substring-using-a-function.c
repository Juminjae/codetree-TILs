#include <stdio.h>
#include <string.h>

int findSubstringIndex(const char *input_string, const char *pattern) {
    int input_len = strlen(input_string);
    int pattern_len = strlen(pattern);

    // 입력 문자열에서 패턴 문자열을 찾기
    for (int i = 0; i <= input_len - pattern_len; i++) {
        int found = 1;  // 부분 문자열 여부를 확인하는 변수
        for (int j = 0; j < pattern_len; j++) {
            if (input_string[i + j] != pattern[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            return i;  // 부분 문자열의 시작 인덱스 반환
        }
    }

    return -1;  // 부분 문자열이 없을 경우 -1 반환
}

int main() {
    char input_string[1001], pattern[1001];
    scanf("%1000s", input_string);
    scanf("%1000s", pattern);

    int index = findSubstringIndex(input_string, pattern);
    printf("%d", index);
    return 0;
}