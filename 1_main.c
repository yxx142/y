//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 数组元素后移函数
void shiftArray(int *ptr_arr, int len) {
    // 从最后一个元素开始向前移动
    for (int i = len - 1; i > 0; i--) {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    // 第一个位置补0
    *ptr_arr = 0;
}

int main() {
    int arr[5];
    
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用后移函数
    shiftArray(arr, 5);
    
    // 打印结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
