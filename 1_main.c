//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
#include <stdlib.h>  // 包含malloc和free函数

int main() {
    // 动态申请内存
    int *arr = (int *)malloc(5 * sizeof(int));
    
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", arr + i);  // 等价于&arr[i]
    }
    
    // 打印数组元素
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));  // 等价于arr[i]
    }
    printf("\n");
    
    // 释放内存，避免内存泄漏
    free(arr);
    arr = NULL;  // 防止野指针
    
    return 0;
}
