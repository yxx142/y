//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 数组元素自增函数
void incrementArray(int *arr, int len) {
    int *p = arr;
    for (int i = 0; i < len; i++) {
        (*p)++;  // 注意括号，先解引用再自增
        p++;
    }
}

int main() {
    int arr[5];
    
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用自增函数
    incrementArray(arr, 5);
    
    // 打印结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
