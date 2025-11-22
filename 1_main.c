//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

int main() {
    int arr[5];
    
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 通过指针将数组元素乘以2
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        *p *= 2;
        p++;
    }
    
    // 打印结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
