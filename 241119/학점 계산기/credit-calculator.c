#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
	scanf("%d", &n);

	double val;
	double sum_val = 0;

	for (int i = 0; i < n; i++) {
		scanf("%lf", &val);
		sum_val += val;
	}

	printf("%lf", sum_val);
	return 0;
}