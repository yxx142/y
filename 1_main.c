//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 冒泡排序函数，使用指针操作
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            // 比较相邻元素
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    
    // 输入10个整数
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用排序函数
    bubbleSort(arr, 10);
    
    // 打印排序结果
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
