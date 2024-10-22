#include <stdio.h>
int func_sum(int num1, int num2);
int func_minus(int num1, int num2);
int func_multi(int num1, int num2);
int func_dash(int num1, int num2);

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    scanf("%d %c %d", &a, &o, &c);

    if (o =='+'){
        func_sum(a,c);
    } else if (o =='-'){
        func_minus(a,c);
    } else if (o =='*'){
        func_multi(a,c);
    } else if (o =='/'){
        func_dash(a,c);
    } else {
        printf("False");
    }
    return 0;
}

int func_sum(int a, int c){
    int total=0;
    total = a+c;
    printf("%d + %d = %d", a, c, total);
    return total;
}

int func_minus(int a, int c){
    int total=0;
    total = a-c;
    printf("%d - %d = %d ", a,c ,total);
    return total;
}

int func_multi(int a, int c){
    int total=0;
    total = a*c;
    printf("%d * %d = %d", a, c, total);
    return total;
}

int func_dash(int a, int c){
    int total =0;
    total=a/c;
    printf("%d / %d = %d", a, c, total);
    return total;
}