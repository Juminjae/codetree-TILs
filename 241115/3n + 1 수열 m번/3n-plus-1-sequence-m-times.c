#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m, n;
    scanf("%d", &m);

    for (int i=0; i<m; i++){
        int cnt = 0;
        scanf("%d", &n);
        while (n!=1){
            if (n%2==0){
                n /= 2;
            } else{
                n = 3*n+1;
            }
            cnt++;
        }
        printf("%d\n", cnt);
    }
  
    return 0;
}