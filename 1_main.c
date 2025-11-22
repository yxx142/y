//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 交换函数，参数为指针
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    // 调用交换函数
    swap(&x, &y);
    
    // 打印结果
    printf("%d %d\n", x, y);
    
    return 0;
}
