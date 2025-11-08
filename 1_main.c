//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 计算a的b次幂
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int sum = 0;
    // 计算1²+2²+3²+4²+5²
    for (int i = 1; i <= 5; i++) {
        sum += power(i, 2);
    }
    printf("%d\n", sum);
    return 0;
}
