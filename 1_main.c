//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 计算等差数列和
int arithmeticSum(int a1, int an, int step) {
    int n = (an - a1) / step + 1; // 项数
    return (a1 + an) * n / 2;
}

int main() {
    // 计算1到100的和（步长为1）
    printf("%d\n", arithmeticSum(1, 100, 1));
    return 0;
}
